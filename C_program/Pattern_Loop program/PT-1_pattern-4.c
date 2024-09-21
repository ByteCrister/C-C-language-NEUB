//pattern-4
#include<stdio.h>
int main()
{
     int n,r,c;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=r;c++)
          {
               printf("%d ",r%2);
          }
          printf("\n");
     }

     return 0;
}
