//Ajaz Khan ka bap Pramod Dubey :D
#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
    int tc;
    scanf("%d",&tc);
    while(tc--){
    int i=0,s,h;
    long long int arr;
    vector<long long int>x;
    char temp; 
    while(i<52){
        scanf("%lld%c", &arr, &temp); 
        x.push_back(arr);
        i++;
        if(temp=='\n'){
            break;
        }
        } 
 
    s=x.size()-1;
    sort(x.begin(),x.end());
    if(x[s]==s){
        cout<<x[s-1]<<endl;
    }
    else{
        cout<<x[s]<<endl;
    }
   // x.erase(remove(x.begin(),x.end(),s),x.end());
    //sort(x.begin(),x.end());
    //h=x.size()-1;
    //cout<<x[h]<<endl;
    }
return 0;
}