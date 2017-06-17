#include<iostream>
#include"bits/stdc++.h"
#define a "."
#define b "H"
#define c "T"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    int test,i,count = 0;
	char s;
    cin>>test;
    while(test--)
    {
        int R;
		cin>>R;
		vector<char>v;
		for(i = 0;i < n; ++i)
        {
        cin>>s;
        v.push_back(s);
        } 
		v.erase(remove(v.begin(),v.end(),'.'),v.end());
		if(v.empty()==0)
		{
		    cout<<"Invalid"<<endl;
		}
		else
		{
			int j=v.size();
			if(v[0]=='T'||v[j-1]=='H')
			{
				cout<<"invalid\n";
			}
			else{
			for(int x = 0;x<j-1;x++)
			{
				if(v[x]==v[x+1])
			{
				count++;
				break;
			}
		}
		}
        if(count==0)
        {
			cout<<"valid\n";
        }
			else
			{
			cout<<"invalid\n";
			}
        }
    }
   return 0;
}
		
			
			
		