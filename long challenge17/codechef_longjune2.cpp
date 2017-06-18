//bachmanity capital :D
#include <iostream>
#include "bits/stdc++.h"
#define N 100000
#define maxN 1000000000
#define loop(x,n) for(int x =1; x <n ;x++)
#define s(t) scanf("%d",&t)
using namespace std;
long long int rank(long long int a,long long int b)
{
	if(a==0){
		long long int table2[b];
		table2[0]=1;
		for(int x =1; x <=b ;x++)
			table2[x]=table2[x-1]+x;
		return table2[b];
	}
	else
	{
		long long int table1[a];
		table1[0]=1;
		for(int x =1; x <=a ;x++)
			table1[x]=table1[x-1]+x+1;
		return table1[a];
	}
}
		
int main(){
	int t;
	s(t);
	while(t--){
	long long int u,v;
	cin>>u>>v;
	long long int rank_uv;
	if(u==0&&v!=0){
		rank_uv =rank(0,v);
	}
	else if(u!=0&&v==0){
		rank_uv =rank(u,0);
	}
	else
	{
		rank_uv =rank(u+v,0)-v;
	}
	cout<<rank_uv<<endl;
	}
	return 0;
}