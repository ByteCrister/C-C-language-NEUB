#include<stdio.h>
int main()
{
    char x;
    printf("Enter a letter :");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("\n Capital letter ");
    else if(x>=97 && x<=122)
        printf("\n Small letter ");
    else
        printf("\n Enter a valid letter !");

    return 0;
}
