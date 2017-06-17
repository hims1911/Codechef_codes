#include <iostream>
#include"bits/stdc++.h"
#include<algorithm>
using namespace std;
 
int main()
{
   long N,i,j,count=0;
   cin>>N;
   long long int a[N],X,L,R,d,b;
   cin>>L>>R;
   
   /*
   for(i=1;i<=R-L+1;i++)
   {
       C[i]=L;
       L++;
   }
   */
   for(i=1;i<=N;i++)
   {
       cin>>a[i];
   }
   X=L;
   sort(a,a+N);
   while(X<=R)
   {
   for(i=1;i<N;i++)
   {
 d=a[i];
for(j=i+1;j<=N;j++)
{
      
       b=a[j];
           if(a[i]+a[j]>X&&b<=X<d+b)
           {
              count++;
              break;
           }
 }       
       }
       X++;
   }
   cout<<count;
   return 0;
}
 