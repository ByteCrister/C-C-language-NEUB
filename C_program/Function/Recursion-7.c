#include<stdio.h>
void fun(int);
int main()
{
     int n;
     printf("Enter N :");
     scanf("%d",&n);

     fun(n);

     return 0;
}

void fun(int n)
{
     if(n>0)
     {
          fun(--n);
          printf("%d ",n);
          fun(--n);
     }
}
