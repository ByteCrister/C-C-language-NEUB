#include<stdio.h>
int main()
{
     int n,r,c;
     printf("Enter an integer number :");
     scanf("%d",&n);
     for(r=n;r>=1;r--)
     {
          for(c=1;c<=r;c++)
          {
               printf("%d ",c);         // can print * or # also
          }
          printf("\n");
     }

     return 0;
}
