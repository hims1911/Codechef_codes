#include <iostream>
#include "bits/stdc++.h"
#define u 'U'
#define v 'D'
using namespace std;
int main() {
    int tc;
    int i,j,k;
    cin>>tc;;
    while(tc--){
        char s[51];
        cin>>s;
        int x =strlen(s);
        int count_u=0,count_v=0,count_i=0,count_a=0;
        for(i = 0; i < x;  i++){
            if(s[i]==u){
            if(s[i]!=s[i+1]){
                count_v++;
            }
            }
            else{
                if(s[i]!=s[i+1]){
                    count_u++;
                }
            }
        }
        count_i=min(count_u,count_v);
        cout<<count_i<<endl;
    }
	return 0;
}
