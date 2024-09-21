#include<stdio.h>
int sub();
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("Enter two integer number : ");
    scanf("%d%d",&a,&b);

    printf("\n SUM = %d",sum(a,b));
    printf("\n SUB = %d",sub(a,b));


    getch();
}
int sub(int a,int b)
{
    int s=a-b;

    return s;
}

