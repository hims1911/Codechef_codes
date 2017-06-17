#include <iosstream>
#include <climits.h>
#define loop(x,n) for(int i = 1;i <= n; i++)
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
loop(x,n){
	cin>>a[i];
	}
int sum;
cin>>sum;
int min[sum];
loop(x,sum){
min[i]==INT_MAX;
}
min[0] = 0;
for(int x = 1; x <sum ;x++){
	for(int y=1;y<=n;y++){
	if(min[x-a[y]]+1<min[x]&&a[y]<=x)
	{
	min[x]=min[x-a[y]];
	}
	}
	}
	cout<<min[sum];
	return 0;
}
	