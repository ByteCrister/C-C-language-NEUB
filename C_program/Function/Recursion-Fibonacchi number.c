#include<stdio.h>
void fib();
int main()
{
    int n,i=0,a=0,b=1;
    printf("Enter N for fibo number :");
    scanf("%d",&n);

    fib(n,i,a,b);

    return 0;
}
void fib(int n,int i,int a,int b)
{
    int fibo;
    if(i<n)
    {
        if(i<=1)
        {
            fibo=i;
        }
        else
        {
            fibo=a+b;
            a=b;
            b=fibo;
        }
        printf(" %d",fibo);

        fib(n,i+1,a,b);
    }
}
