// Pattern type-1 number pattern-1
#include<stdio.h>
int main()
{
     int n,r,c;
     printf("Enter an integer value :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=r;c++)

          {
               printf("%d ",c);         //we can print * or # also.
          }
          printf("\n");
     }



     return 0;
}
