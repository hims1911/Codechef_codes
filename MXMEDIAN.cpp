#include <iostream>
#include<algorithm>
#include"bits/stdc++.h"
using namespace std;
 
int main() {
int test;
cin>>test;
while(test--)
{
    int N,i,j,a,b,temp,big;
    int A[100000],B[50000];
    cin>>N;
    for(i=1;i<=(2*N);i++)
    {
        cin>>A[i];
    }
	sort(A+1,A+2*N+1)
    for(i=1;i<=N;i+=2)
    {
        temp=A[i];
		A[i]=A[2*N-i];
		A[2*N-i]=temp;
       
                   
    }
    for(i=1;i<=N;i++)
    {
        a=A[2*i-1];
        b=A[2*i];
        big=max(a,b);
        B[i]=big;
        
    }
    sort(B,B+N);
    int m=((1+N)/2);
    int median =B[m];
    cout<<median<<endl;
    
    
    
    for(i=1;i<=(2*N);i++)
    {
        cout<<A[i];
        cout<<" ";
    }
    cout<<endl;
}
 
return 0;
}