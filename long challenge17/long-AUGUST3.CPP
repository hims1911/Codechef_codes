// shauk nhi hai hume bus khudke liye karte hai feat. Deepak SHarma
#include "bits/stdc++.h"
#define l long int
#define ll long long int
#define loop(x,n) for(x = 0; x <n; ++x)
#define maxN 1000
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,M,i,j;
		cin>>N>>M;
		string str[N];
		ll minSalary[maxN],ordSalary[maxN],maxOffer[maxN],chu[maxN],temp=0,sal=0,max=0,d,count=0,NS=0;
		char c;
		loop(i,N){
			cin>>minSalary[i];
		}
		loop(i,M){
			cin>>ordSalary[i];
			cin>>chu[i];
			temp=chu[i];
			maxOffer[i]=temp;
		}
		loop(i,N){
			cin>>str[i];
		}
 
		for(i=0;i<N;i++){
			max=minSalary[i];
			int t=0,d;
			for(j=0;j<M;j++){
				c=str[i].at(j);
			//	cout<<maxOffer[j]<<" maxOffer["<<j<<"]\n" ;
				if(c=='1'&&maxOffer[j]!=0){
					if(ordSalary[j]>=minSalary[i]&&max<=ordSalary[j]){
					//	sal=sal+ordSalary[j];
						max=ordSalary[j];
					//	count++;
						t++;
						d=j;
					}
				}
				
			}
			if(t!=0){
			    sal =sal+max;
		        count++;
		        maxOffer[d]--;
			}
	
		}
		loop(i,M){
		    		if(maxOffer[i]!=chu[i]){
		   NS++; 
		}
		}
        printf("%lld %lld %lld\n",count,sal,(M-NS));
 
	}
	return 0;
} 