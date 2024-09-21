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
               printf("%d",c);
          }
          printf("\n");
     }


     return 0;
}
