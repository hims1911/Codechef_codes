//MeGsteRRRRRRRRRRRRRR :D
#include<iostream>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string a;
        vector<long int>num;
        vector<char>s;
        char temp;
        long int i,g=0,l=0,count=1,res,init=0;
        cin>>a;
        for(i=0;i<a.length();i++){
            if(a[i]!='='){
                l=a[i];
                s.push_back(l);
            }
        }
        if(s.size()==0){
            cout<<"1"<<endl;
        }
        else if(s.size()==1){
            cout<<"2"<<endl;
        }
        else{
        for(i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                count+=1;
                num.push_back(count);
            }
            else{
                count=1;
                num.push_back(count);
            }
        }
 
         //   cout<<"count "<<count<<endl;
            sort(num.begin(),num.end());
         //   cout<<"size "<<num.size()<<endl;
            init=num.size()-1;
         //   cout<<"init "<<init<<endl;
            res=num[init];
            cout<<res+1<<endl;
        }
    }
    
    return 0;
} 