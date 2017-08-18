#include"bits/stdc++.h"
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long int N,i,ans=0;
        cin>>N;
        long long int A[N];
        for(i=0;i<N;i++){
            cin>>A[i];
        }
        for (i = 0; i < N; i++)
           ans =ans | A[i];
        cout<<ans<<endl;
    }
    return 0;
} 