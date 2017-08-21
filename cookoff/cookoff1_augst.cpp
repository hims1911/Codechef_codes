#include <iostream>
#include "bits/stdc++.h"
#include <string.h>
#define l long
#define ll long long
#define s(t) scanf("%d",&t)
#define Max 100000
#define MaxN 100000000
#define loop(x,n) for(int x=0;x<n;x++)
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int v1,v2,N;
		cin>>N>>v1>>v2;
		double l1, l2;
		double t1,t2;
		l1=1.41*N;
		l2=2*N;
		t1=l1/double(v1);
		t2=l2/double(v2);
		if(t1<t2){
			cout<<"Stairs\n";
		}
		else{
			cout<<"Elevator\n";
		}
	}

	return 0;
}