
#include<iostream>

long long int fact(long long int num) 
{
         if(num==1||num==0) 
        {
              return 1;
        }
        else 
        {
             return num * fact(num-1);
        }
}

int main() 
{
       long long int n,r,nPr,nCr,fact_n,i,sum=0;
       const unsigned int M = 1000000007;

       cin>>n;
       
       cin>>r;
        if(r%2!=0){
            r=r-1;
        }

        fact_n=fact(n);

        for(i=0;i<=r;i=i+2){

            
        nPr=(fact_n/fact(n-i))%M;

        nCr=(nPr/fact(i))%M;

        sum=(sum+nCr)%M;
        }

       cout<<sum<<endl;;

       return 0;
}
