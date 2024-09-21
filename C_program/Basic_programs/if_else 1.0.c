#include<stdio.h>
int main()
{
    int a=15,b;
    printf("enter a intejer number :");
    scanf("%d",&b);
    if (b%100==0)
        a*=1;
    else if (b%10!=0)
        a+=5;
    else
    a--;
        printf("the result is :%d",a);
    return 0;
}
