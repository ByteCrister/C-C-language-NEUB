#include<stdio.h>
int sum_(int a,int b)
{
     int sum=a+b;

     return sum;
}

int main()
{
     int x,y,z;
     printf("Enter two integer number : ");
     scanf("%d%d",&x,&y);

     z=sum_(x,y);

     printf("\n SUM = %d",z);


     return 0;
}
