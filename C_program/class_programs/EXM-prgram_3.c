#include<stdio.h>
int main()
{
     int n,i;

     printf("Enter n :");
     scanf("%d",&n);

     int m=1;
     for(i=1;i<=n;i++)
     {
          m*=i;
     }
     printf("\n Output -> %d",m);


     return 0;
}
