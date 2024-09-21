#include <stdio.h>
int main()
{
    float num;
    printf("enter a number:");
    scanf("%f",&num);
    if
        (num>0)
        printf("Its a positive number");
    else if
        (num<0)
        printf("Its a negative number");
    else
        printf("it is zero");
    getch();
}
