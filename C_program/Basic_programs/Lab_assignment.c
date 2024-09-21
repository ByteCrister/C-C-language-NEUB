#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter an integer number :");
    scanf("%d",&num);

    for(i=1; i<num; i++)
        printf("# ");

    for(j=1; j<=num; j++)
        printf("#\n");

    return 0;
}
