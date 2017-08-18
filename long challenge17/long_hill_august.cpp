//   H1mSR0cK
//   I'm The One :D ;-;
//   Mr. ParaN01D
#include <iostream>
#include "bits/stdc++.h"
#include <string.h>
#define l long
#define ll long long
#define s(t) scanf("%lld",&t)
#define lo(x,n) for(ll int x=0;x<n;x++)
#define Max 1000000
#define MaxN 100000000
using namespace std;

int main(){
	ll int N,Q,i,A[Max+1];
	scanf("%lld%lld",&N,&Q);
	lo(i,N)
		s(A[i]);	
	while(Q--){
	ll int Q1,L,R,X,I,K,count;
	s(Q1);
	if(Q1==1){
		s(I);
		s(K);
		count=I;
		count--;
		for(i=count+1;i<N;i++){
			if(K==0)
				break;
			if(i-count>100)
				break;
			else if(A[count]<A[i]){
			    count=i;
				K--;
			}
		}
		printf("%lld\n",(count+1));
	}
	else{
		s(L);
		s(R);
		s(X);
		for(i=L-1;i<=R-1;i++)
			A[i]+=X;
	}
	}
	return 0;
}