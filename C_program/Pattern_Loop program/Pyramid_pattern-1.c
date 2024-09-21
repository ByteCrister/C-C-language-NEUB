#include<stdio.h>
int main()
{
     int n,r,c;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=n-r;c++)
          {
               printf(" ");
          }
          for(c=1;c<=2*r-1;c++)
          {
               printf("*",c);
          }
          printf("\n");
     }

     return 0;
}
