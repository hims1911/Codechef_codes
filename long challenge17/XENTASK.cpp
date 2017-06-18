#include iostream
#includebitsstdc++.h
using namespace std;

int main()
{
   int test,N,i,j;
   long X[20000],Y[20000];
   long long int sum_x=0,sum_y=0;
   cintest;
   while(test--)
   {
       cinN;
       for(i=1;i=N;i++)
       {
           cinX[i];
       }
       for(i=1;i=N;i++)
       {
           cinY[i];
       }
       sum_x=X[1];
       sum_y=Y[1];
       for(i=2;i=N;i++)
       {
           if(i%2==0)
           {
               sum_x+=Y[i];
                sum_y+=X[i];            
            }
           else
           {
               sum_x+=X[i];
               sum_y+=Y[i];
           }
       }
       if(sum_x=sum_y)
       {
           coutsum_xendl;
       }
       else
       {
           coutsum_yendl;;
       }
   }
   
   return 0;
}