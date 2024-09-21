#include<stdio.h>

int num_(int a)
{
    if(a%2==0)
        printf("\nEVEN");
    else
        printf("\nODD");
}

int main()
{
    int x,y;
    printf("Enter an integer number : ");
    scanf("%d",&x);

    y=num_(x);


    return 0;
}
