#include "bits/stdc++.h"
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
	vector<char>a;
	for(int i=0;a[i]!='0\';i++){
	cin>>s[i];
	}
	int n=s.size();
	cout<<n;
	int count_snake=0;count_mongoes=0;
	for(int i =0; i<n;i++;i++){
		if(a[i]=='s'){
		count_snake++;
		}
		else
		count_mongoes++;
	}
	for(int i=0;i<n;i++)
	{
	if((a[i]=='s'&&a[i+1]=='m')||(a[i]=='m'&&a[i]=='s'){
	count_snake--;
	}
	}
	if(count_snake<count_mongoes){
	cout<<"mongooses\n";
	}
	else if(count_snake==count_mongoes){
	cout<<"tie\n";
	}
	else{
	cout<<"snake\n";
	}
	return 0;
}