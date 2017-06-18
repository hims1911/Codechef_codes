#include<iostream>
#include"bits/stdc++.h"
using namespace std;
int main()
{
 long long int multiply;
 long long int count=0;
 int N;
 long long int i,j,k;
 long long int K,A[N];
 cin>>N;
 cin>>K;
 for(i=0;i<N;i++)
  {
    cin>>A[i];
  }
 long long int max=pow(2,N);
 for(i=1;i<max;i++)
  {
    multiply=1;
    for(int j=0;j<N;j++)
     {
	   if(i &(1<<j))
	   {
         multiply*=A[j];
       }
     }
	if(multiply	<=K)
     {
	 count++;
	 }
  }
  cout<<count<<endl;
 
return 0;
} 