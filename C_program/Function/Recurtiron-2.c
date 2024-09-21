#include<stdio.h>
int main()
{
     int n,a=1;
     printf("Enter an positive integer :");
     scanf("%d",&n);

     printf("\n The natural numbers are :");
     num(n,a);

     return 0;
}

int num(int n, int a)
{

     if(a<=n)
     {
          printf(" %d ",a);

         return num(n,a+1);
     }

}
