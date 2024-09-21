#include<stdio.h>
int main()
{
     int a,b,sum=0;
     printf("Enter two integer number :");
     scanf("%d%d",&a,&b);

     int *p1,*p2;

     p1=&a;p2=&b;

     sum=*p1+*p2;

     printf("\nsum= %d",sum);


     return 0;
}
