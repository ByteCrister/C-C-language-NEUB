#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature=");
    scanf("%f",&c);
    f=((c*9/5)+32);
    printf("\n The Result is=%.2f",f);printf("F");
    getch();
}
