#include<iostream>
#include"bits/stdc++.h"
using namespace std;
int main()
{
ios::sync_with_stdio(false);
int test;
while(test--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
max=a[0];
for(int i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
int total;
total=n-max;
cout<<total<<endl;

}
return 0;
}