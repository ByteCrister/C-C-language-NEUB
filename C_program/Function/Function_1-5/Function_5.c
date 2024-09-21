#include<stdio.h>
float result_(float a,float b)
{
    float sum,sub,mul,div;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("\n Summation -> %.2f",sum);
    printf("\n Subtraction -> %.2f",sub);
    printf("\n Multiplication -> %.2f",mul);
    printf("\n Divide -> %.2f",div);

    return sum,sub,mul,div;
}
int main()
{
    float x,y,z;
    printf("Enter two number : ");
    scanf("%f%f",&x,&y);

    z=result_(x,y);

    getch();
}
