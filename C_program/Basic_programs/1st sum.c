#include<stdio.h>
int main()
{
    char a;
    printf("Enter a letter  :");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("\n Capital letter");
    }
    else if(a>=97 && a<=122)
    {
        printf("\n Small letter");
    }
    else
    {
        printf("\n Not a valid input");
    }
    return 0;

}
