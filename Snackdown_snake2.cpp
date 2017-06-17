#include"bits/stdc++.h"
#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,i,count=0;
		cin>>n;
		int H[n];
		for(i = 1;i <= n; i++)
			{
				cin>>H[i];
			}
		if(n%2==0)
		{
		    cout<<"no"<<endl;
		}
		else
		{
		int centre = (n/2)+1;
		if(H[centre]!=centre)
			{
				count++;
			}
		else
		{
		for(i = 1;i <centre;i++)
			{
				if(H[i]!= i)
				{
					count++;
					break;
				}
			}
		for(i = n;i >centre;i--)
			{
				if(H[i]!= n-i+1)
				{
					count++;
					break;
				}
		}
		}
		if(count ==0)
		{
			cout<<"yes"<<endl;
		}
		else
		{
		cout<<"no"<<endl;
		}
	}
}
return 0;
}
	