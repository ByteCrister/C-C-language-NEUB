#include<stdio.h>
int main()
{
     int n,i,j,m=1;
     printf("Enter n :");
     scanf("%d",&n);

     for(i=n;i>=1;i--)
     {
          for(j=1;j<=n-i;j++)
          {
               printf(" ");
          }
          for(j=1;j<=i;j++)
          {
               printf("%d",m);
          }
          printf("\n");
          m++;
     }


     return 0;
}
