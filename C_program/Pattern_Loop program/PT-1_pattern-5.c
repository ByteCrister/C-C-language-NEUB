//Pattern-5
#include<stdio.h>
int main()
{
     int r,c,n;

     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=r;c++)
          {
               printf("%c ",c+64);           //for small letter 'c+96' //for row match r+64

          }
          printf("\n");
     }



     return 0;
}
