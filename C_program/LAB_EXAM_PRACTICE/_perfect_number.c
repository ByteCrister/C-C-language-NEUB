#include<stdio.h>
int main()
{
     int n=6,sum=0;
     for(int i=1; i<n; i++)
     {
          if(n%i==0){
               sum+=i;
          }
     }
     if(sum==n)
          printf("\n%d is a perfect number",n);
     else
     printf("\n%d is not a perfect number",n);
     return 0;
}
