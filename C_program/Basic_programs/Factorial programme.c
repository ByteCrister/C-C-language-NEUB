#include<stdio.h>
int main()
{
     int i,a,mul=1;
     printf("Enter an integer number : ");
     scanf("%d",&a);

     for(i=1;i<=a;i++)
     {
          mul*=i;
          printf(" *%d",i);

     }
     printf(" =%d",mul);

     return 0;
}
