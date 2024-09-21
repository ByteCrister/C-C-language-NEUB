#include<stdio.h>
int main()
{
    int num,i=2,sq;

    printf("Enter an integer number :");
    scanf("%d",&num);

    do
    {
        printf("%d -> ",i);

        sq=pow(i,2);

        printf("%d",sq);

        printf("\n");

        i++;

    }
    while(i<=num);

    return 0;
}
