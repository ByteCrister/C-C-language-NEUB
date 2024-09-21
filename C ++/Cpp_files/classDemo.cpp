#include<stdio.h>
class demo
{

public:
    int a;
    int b;

    int sum(int a,int b);

private:
     int result;

};
int demo::sum(int a,int b)
{
     result =a+b;
     return result;
}
int main()
{
    demo a;
    printf("Enter two numbers : ");
    scanf("%d%d",&a.a,&a.b);
    int result=a.sum(a.a,a.b);
    printf("\nSum = %d",result);




    return 0;
}
