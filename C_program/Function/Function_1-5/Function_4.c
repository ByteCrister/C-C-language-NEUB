#include<stdio.h>
int num_(int a)
{
    int i;
    for(i=1; i<=a; i++)
    {
        if(a%i==0)
            printf(" %d ",i);
    }

}

int main()
{
    int b,c;
    printf("Enter an integer number : ");
    scanf("%d",&b);
    printf("\n Divisor numbers ->");
    c=num_(b);

    return 0;
}
