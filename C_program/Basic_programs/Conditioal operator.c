//num1 ? num2 : num3

#include<stdio.h>
int main()
{
     int a,b,large;
     printf("enter two numbers  :");
     scanf("%d%d",&a,&b);

    large = (a>b) ? a : b;
    printf("large number %d \n",large);


     return 0;
}
