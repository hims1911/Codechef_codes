
5
3
PROBLEM LINK
Practice
Contest

DIFFICULTY
CAKEWALK

PREREQUISITES
Greedy Algorithms

PROBLEM
You need to find the representation of a given integer N as a sum of powers of two up to 211 with the smallest number of summands (repetitions in representation are allowed).

QUICK EXPLANATION
The problem can be solved by greedy algorithm: at each step we should take the largest possible menu that we can. To prove this noticed that if we order two equal menus, say 4 and 4, then we can order instead one menu of cost 8. In this problem you can implement this approach in any way you like but the easiest and fastest way gives the following pseudo-code:

res = 0
for i = 11 to 0
  res = res + N div 2i
  N = N mod 2i
EXPLANATION
At first we reveal the answer and then will prove it in detail. Write N as Q * 2048 + R, where Q and R are non-negative integers and R < 2048. Then the answer is Q + bitCount(R), where bitCount(X) is the number of ones in binary representation of X. If R = 2h[1] + 2h[2] + ... + 2h[K] is a binary representation of R then the optimal representation of N is N = 2048 + ... + 2048 + 2h[1] + 2h[2] + ... + 2h[K] where we have Q copies of 2048. Let’s call this approach formula approach.

Another way to come up with this answer is to use Greedy Algorithm. That is, at each step you should take the largest possible summand among {1, 2, 4, 8, ..., 2048} that is not greater than the current value of N and then subtract it from N. In fact, this problem is a special case of Change-making problem and in general it should be solved using Dynamic Programming or Integer Linear Programming but this set of coin values is special and admit using of Greedy Algorithm as we will see below.

Now we discuss why both of these approaches are correct.

1. Formula Approach.
Let’s prove that formula approach is correct. Consider some representation of N as a sum of allowed powers of two. Let there is exactly C[K] occurrences of 2K in this representation. Then we have

N = C[0] * 1 + C[1] * 2 + C[2] * 4 + ... + C[11] * 2048

Note that the total number of summands here is C[0] + C[1] + ... + C[10] + C[11]. Assume that for some K < 11 we have C[K] >=2, that is, we have at least two copies of 2K in the representation of N. Since K < 11 then the price 2K+1 is allowed. Hence we can replace two copies of 2K by one copy of 2K+1 not changing the value of sum but decreasing total number of summands. Thus, for optimal representation we should have

C[K] <= 1 for all K < 11.                         (1)
We will show that under the constraints (1) representation of N is uniquely determined. Of course this unique representation will be the optimal one.

At first note that

R = C[0] * 1 + C[1] * 2 + C[2] * 4 + ... + C[10] * 1024 <= 1 + 2 + 4 + ... + 1024 = 2047 < 2048.

Hence

2048 * C[11] <= N < 2048 * (C[11] + 1)

or

C[11] <= N / 2048 < C[11] + 1

which means by one of the definition of floor function that C[11] = floor(N / 2048) = Q. So C[11] is uniquely determined under the constraints (1) and equals to Q.

Further note that due to (1) C[10]C[9]...C[1]C[0] is a binary representation of R and hence C[0], C[1], ..., C[10] are also uniquely determined under the constraints (1).

Thus we have found this unique representation.

Next we have bitCount(R) = C[0] + C[1] + ... + C[10]. Hence the total number of summands in this representation is Q + bitCount(R) as was announced earlier. The complexity of this method is O(K), where K = 12 is the total number of powers of two that we are allowed to use.

2. Greedy Approach.
Now let’s see why greedy approach produces the same solution. Clearly at first several steps we will take the 2048 until we get a number strictly less than 2048. Then we will consider powers of two in descending order starting from 1024 and take the current power of two if it is not greater than the current value of N. It is quite clear that this process generates exactly the binary representation of N. Thus the whole representation coincides with the constructed above.

There are several ways how to implement this algorithm in this problem. First one is simple but slower in general. Namely, we have an outer loop of the form while (N > 0). Then at each iteration of this loop we simply check in one loop all allowed powers of two in descending order until we find the power of two, say 2X, that is not greater than the current value of N. After that we decrease N by 2X and increase answer by 1. The complexity of this approach is O(N / 2K-1 + K2) in the worst test case. This is because at first N / 2K-1 steps we have only one iteration of inner loop (we break at 2048) and then we have at most K steps for each of which we have at most K steps in the inner loop.

In second method we swap outer and inner loop of the first method. So we iterate over allowed powers of two in descending order and for each power of two we have an inner loop of the form while (N >= 2X) in the body of which we do the same as for the first method, that is, decrease N by 2X and increase answer by 1. The complexity of this method is O(N / 2K-1 + K). Strictly speaking the number of basic operations in this method is O(answer + K). N / 2K-1 + K is an upper bound for the answer.

Analyzing second implementation of the greedy approach it is easy to see how to make it faster. For each power of two we have the following inner loop

while N >= 2X do
  N = N - 2X
  res = res + 1
Clearly this equivalent to

  res = res + N div 2X
  N = N mod 2X
Thus we obtain third implementation of the greedy algorithm with complexity O(K).

3. Dynamic Programming Approach.
Now let’s consider another approach that allows to find the answer for arbitrary set of coin values in reasonable time. We will use dynamic programming. Let d1, ..., dK be the set of allowed coin values (they all are positive). Denote by F(P) the minimal number of coins needed to represent P by this set of coins (repetitions in representation are allowed). Clearly F(0) = 0. Consider some value of P > 0. Then it is quite clear that

F(P) = min{F(P - d1), F(P - d2), ..., F(P - dK)} + 1.             (2)
where we set for convenience F(x) = INF for x < 0 (INF is some very large number). But let’s prove this formally.

At first consider the optimal representation for P. Let it be P = A1 + ... + AL where L = F(P) and each Ai is of course equal to one of dj. Then A2 + ... + AL is some representation of P – A1 of the length L – 1. By definition of F(P – A1) we have
L – 1 >= F(P – A1)
or
F(P) >= F(P – A1) + 1.
Since A1 is equal to one of dj then
F(P – A1) >= min{F(P - d1), F(P - d2), ..., F(P - dK)}.
Combining the last two inequalities we get the first part of (1). Namely

F(P) >= min{F(P - d1), F(P - d2), ..., F(P - dK)} + 1.             (3)
Now let dj be those coin value for which F(P - dj) is minimal among F(P - d1), F(P - d2), ..., F(P - dK). Let B1, ..., BZ be the optimal representation for P - dj. That is P - dj = B1 + ... + BZ and Z = F(P – dj). But then P = dj + B1 + ... + BZ. So P has a representation of the length Z + 1 which by definition of F(P) means that

F(P) <= Z + 1 = F(P – dj) + 1 = min{F(P - d1), F(P - d2), ..., F(P - dK)} + 1.             (4)
Now (2) follows from (3) and (4). Formula (2) allows to find all values F(0), F(1), ..., F(N) in a simple double loop. So F(N) can be found in O(N * K) time with O(N + K) memory.