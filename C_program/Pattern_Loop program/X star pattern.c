#include<stdio.h>
int main()
{
     int n,c,r;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=n;c++)
          {
               if(c==r||r+c==n+1)
                    printf("*");
               else
                    printf(" ");
          }
          printf("\n");
     }




     return 0;
}
