#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main
	ios::sync_with_stdio(false);
	int test;
	cin>>test;
	while(test--){
	int n,m;
	cin>>n>>m;
	int u[m],v[m];
	for(int i=0;i<m;i++){
		cin>>u[i]>>v[i];
	}
	int sub=n-2*m;
	if(sub%2==0){
	cout<<"yes\n";
	}
	else{
	cout<<"no\n";
	}
	}
	return 0;
	}
	