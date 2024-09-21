#include<stdio.h>
int main()
{
     int n,c,r,sum=0;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {

          for(c=1;c<=r;c++)
          {
               printf("%d ",++sum);

          }
          printf("\n");
     }


     return 0;
}
