
#include<stdio.h>
int fibonacci(int x)
{
    if(x==0)
        return 0;

    else if(x==1)
        return 1;

    else
        return fibonacci(x-1)+fibonacci(x-2);

}

int main()
{
    int i,n,a;

    printf("Enter last term of FIBONACCI series. ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        a=fibonacci(i);
        printf("%d ",a);

    }
    printf("\n");
    return 0;
}

