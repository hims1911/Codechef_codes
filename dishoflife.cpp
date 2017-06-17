#include<iostream>
using namespace std;
int main()
{
 int test;
 int N,K,p[100000],k[100000],i,j,count;
 cin>>test;
 while(test--)
   {
   cin>>N>>K;
   for(i=1;i<=N;i++)
   {			
     cin>>p[i];
      for(j=1;j<=p[i];j++)
       {
          cin>>k[j];
       }
    }
if(N<2)
{
for(j=1;j<p[1];j++)
{
if(k[j]==K)
{
count+=1;
cout<<"all"<<endl;
break;
}
}
for(j=1;j<p[2];j++)
{
if(k[j]==K)
{
count+=1;
cout<<"some"<<endl;
break;
}
}
if(count==0)
{
cout<<"sad"<<endl;
break;
}
}
else
{






}
  }
 return 0;
}