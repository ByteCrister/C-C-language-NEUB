#include<stdio.h>
int sum();
int main()
{
     int n;
     printf("Enter the base number :");
     scanf("%d",&n);

     printf("Sum =%d",sum(n));

     return 0;
}

int sum(int n)
{
     if(n>1)
     {
          return n*n+sum(n-1);
     }
     else
          return 1;
}
