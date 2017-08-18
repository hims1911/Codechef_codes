//I know I can Treat u Better <3_ ParanOiD one
#include <iostream>
#include "bits/stdc++.h"
#define ll long long
#define l long
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll int energy,B,x,y,k;
        unsigned ll int res,temp,max,mid;
        cin>>energy>>B;
        if(energy<=B){
            max=0;
            cout<<max<<endl;
        }
        else{
            energy -=B;
            x=energy/(2*B);
            y=energy%(2*B);
            if(y==0){
            res=x*(x+1)*B;
            }
            else{
            res=x*(x+1)*B;
            x++;
            res =res+x*y;
            }
            cout<<res<<endl;
        }
    }
    return 0;
} 