// sudo rm -f past :D
#include "bits/stdc++.h"
#define l long
#define ll long long
#define s(t) scanf("%ld",&t)
using namespace std;
int main(){
	l int tc;
	s(tc);
	while(tc--){
		l int n,i,D,j;
		s(n);
		s(D);
		ll int A[n];
		ll int temp,sum=0,sub,res1=0,count=0,flag=0;
		double avg;
		for(i=0;i<n;i++){
			cin>>A[i];
			temp=A[i];
			sum+=temp;
		}
		avg=(sum/(double)n);
	//	cout<<"avg "<<avg<<endl;
		if(avg-int(avg)!=0){
		    cout<<"-1\n";
		}
		else{
           		 for(j=0;j<D;j++){
		        	for(i=j;i<n;i+=D){
		            		if(A[i]>avg&&i+D<n){
		                		sub =A[i]-avg;
		                		A[i]=A[i]-sub;
		                		A[i+D]=A[i+D]+sub;
		                		res1+=sub;
		            		}
		            		else if(A[i]<avg&&i+D<n){
		                		sub=avg-A[i];
		                		A[i]=A[i]+sub;
		                		A[i+D]=A[i+D]-sub;
		                		res1+=sub;
		            		}
		    		}
			}
			for(i=0;i<n;i++){
		        	if(A[i]!=avg){
		            	flag=1;
		            	break;
		       		 }
			}
			if(flag==0){
		     	cout<<res1<<endl;
			}
			else{
		    	cout<<"-1\n";
			}	    
		}
	}
	return 0;
} 