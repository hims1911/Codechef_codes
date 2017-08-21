#include <iostream>
#include "bits/stdc++.h"
#define ll long long
#define s(t) scanf("%d",&t)
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
using namespace std;
void solve(){
        long long k,A,B,res;
        cin>>k>>A>>B;

        ll maximum = MAX(A,B);
        ll minimum= MIN(A,B);

        if (maximum - minimum == k/2 && k % 2 == 0) {
            res=0;
            cout<<res<<endl;
        }
        else if (maximum - minimum - 1 < k/2) {
            res=maximum-minimum-1;
            cout<<res<<endl;
        }
        else {
            res=k-maximum+minimum-1;
            cout<<res<<endl;
        }
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	s(t);
	while(t--){
        solve();
	}
	return 0;
}
