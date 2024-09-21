#include<stdio.h>
int main()
{
     int n,c,r;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=n;r>=1;r--)
     {
          for(c=1;c<=n-r;c++)
          {
               printf("  ");
          }
          for(c=1;c<=2*r-1;c++)
          {
               printf("%c ",c+64);
          }
          printf("\n");
     }


     return 0;
}
