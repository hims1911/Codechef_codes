//MeGsteRRRRRRRRRRRRR :D akka H1mSR0cK
#include <iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
	long long int u,v,rank=0,sum=0;
	long long int n;
	cin>>u>>v;
	n=u+v;
	sum=n*(n+1);
	sum/=2;
	rank=sum+u+1;
	cout<<rank<<endl;
	}
	return 0;
}