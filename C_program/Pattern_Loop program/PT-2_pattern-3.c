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
               printf("%c ",c+64);      //for row match r+64
          }
          printf("\n");
     }


     return 0;
}
