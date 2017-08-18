	//High Rated H1mSR0cK
	#include <iostream>
	#include "bits/stdc++.h"
	using namespace std;
	int main(){
		int test;
		cin>>test;
		while(test--){
			int n,count=0,carry=1;
			cin>>n;
			int A[n];
			for(int i = 1; i <= n; ++i){
				cin>>A[i];
				if(A[i]>7)
					count++;
			}
			if(count>0)
				cout<<"no\n";
			else{
			    int temp=n/2;
			    if(A[temp+1]!=7){
			        cout<<"no\n";
			    }
			    else{
				    for(int i=1;i<=(n/2);i++){
				       // cout<<i<<" i\n";
				      if(A[i]==A[n-i+1]&&A[i]==carry){
				    //      cout<<A[i]<<endl;
				      	if(A[i]!=A[i+1]){
				      		carry=carry+1;	
				      	}
				      } 
				      else{
				      	count++;
				      	break;
				      }  
				    }
				    if(count==0&&carry>=7)
					    cout<<"yes\n";
			    	else
					    cout<<"no\n";
			    }
			}
		}
		return 0;
		}