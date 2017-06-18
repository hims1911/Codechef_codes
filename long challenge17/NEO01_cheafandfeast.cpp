//codecheFFFFFFFFFF :D <3 ;-;
#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int test;
  cin>>test;
  while(test--){
    int N;
    cin>>N;
    long long int A[N],countP=0,countN=0,co,y1,y2,last,i;
    long long int sum=0,neg=0,h,max1,temp1,temp2,min1,s,to,ten;
    vector<long long int>x;      //x vector for storing negative values
 
    for(i = 0; i < N; ++i){
        cin>>A[i];
        if(A[i]>=0){
            sum+=A[i];
            countP++;
        }
        else{
        countN++;
        neg=A[i]+neg;
        to=A[i];
        x.push_back(to); //push that element to negative array
        }
    }
    if(sum==0){
        cout<<neg<<endl;
    }
    else if(neg==0){
        cout<<(sum*countP)<<endl;
    }
    else{
            vector<long long int>a;
            ten =(sum*countP)+neg;
 
            a.push_back(ten);
            co =countN-1;
            sort(x.begin(),x.end());
            last =x[co];
 
 
            max1 =sum +last;
 
            neg-=last;
            min1= neg;
 
 
            countP+=1;
            temp1 =(max1*countP)+min1;
 
 
            a.push_back(temp1);
            if(countN>1){
            for(i=1;i <countN;i++){
                last =x[co-i];
                max1 =max1 +last;
 
                min1= min1 -last;
 
                countP+=1;
                temp2 =(max1*countP)+min1;
 
                a.push_back(temp2);
 
                }
            }
            sort(a.begin(),a.end());
                s =a.size()-1;
                cout<<a[s]<<endl;
                
    }
  }
  return 0;
}  