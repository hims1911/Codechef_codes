//  H1mSR0cK 
// pro's Never Fake   
// Mr. ParaN01D sometimes 
#include "bits/stdc++.h"
#include<iostream>
#define loop(x,n) for(int x=0;x<n;x++)
using namespace std;
int main(){
   int x;
   cin>>x;
   while(x--){
       string s,t;
       cin>>s;
       cin>>t;
       int l =s.length();
       int freq_1[26],freq_2[26],i;
       int flaga=0,flagb=0,flagc=0,flagd=1,flage=0,count=0;
       loop(i,26){
           freq_1[i]=0;
           freq_2[i]=0;
       }
       loop(i,l){
           freq_1[s[i]-97]+=1;
           freq_2[t[i]-97]+=1;
       }
       loop(i,26){
           if(freq_1[i]!=0){
               count++;
           }
       }
       if(count>1){
           flaga=1;
           //cout<<"distinct elemt present \n";
       }
       loop(i,26){
        if(freq_1[i]>1&&freq_2[i]==0){
            flagb=1;
            //cout<<"2 hai \n";
        }
       }
       loop(i,26){
        if(freq_1[i]>1){
            //cout<<"flag 3 \n";
            flagc=1;
        }
       }
       loop(i,26){
        if(freq_2[i]>0&&freq_1[i]==0){
            flagd=0;
            //cout<<"yeah 4 \n";
        }
       }
       loop(i,26){
        if(freq_1[i]>0&&freq_2[i]==0){
            flage=1;
          //  cout<<"flag 5\n";
        }
       }  
        if((flagb==1)||((flagc=1||flage==1)&&flagd==1 && flaga==1&&flage==1)){
         //   cout<<'mkc \n';
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
       
   }
   return 0;
}   