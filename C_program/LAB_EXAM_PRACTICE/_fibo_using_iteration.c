#include<stdio.h>
int main()
{
     int n,i,n1=0,n2=1,sum=0;

     printf("Enter number of fibo: ");
     scanf("%d",&n);

     for(i=0; i<=n; i++){
          if(i==0)
               sum=0;
          else if(i==1)
               sum=1;
          else{
               sum=n1+n2;
               n1=n2;
               n2=sum;
          }
          printf("%d ",sum);
     }

     return 0;
}
