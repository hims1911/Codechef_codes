#include <iostream>
#include "bits/stdc++.h"
using namespace std;
bool isPrime(long int n)
{
     long int i,sq;
     if(n==1)
       return false;
	 if(n==2)
       return true;
     if(n%2==0)
       return false;
     sq=sqrt(n);
     for(i=2;i<=sq;i++)
     {
        if(n%i==0)
          return false;  
     }
      return true;
}


int main(){
    int N;
    cin>>N;
    long int A[N];
    for(int i =1; i <= N; ++i)
    {
    cin>>A[i];
    }
    int Q;
    cin>>Q;
        while(Q--){
            int L,R;
            long int X,Y,number=0,expo=0;
            cin>>L>>R>>X>>Y;
            long int result =0;
            for(long int i = X; i <=Y; ++i){
                if(isPrime(i)){
                    for(int j = L; j <= R; j++){
                            number = A[j];
                            expo=0;
                            while(number % i == 0){
                                expo = expo +1;
                                number = number/i;
                                }
                        result =result+expo;
                        }
                    }
                }
              
                    
                         
                
        cout<<result<<endl;    
            
        }
    return 0;
}
