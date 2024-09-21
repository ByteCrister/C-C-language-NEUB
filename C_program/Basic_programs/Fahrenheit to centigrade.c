#include <stdio.h>
int main()
{
    float a,c;
    printf("Enter the fahrenheit temperature=");
    scanf("%f",&a);
    c=(5*(a-32)/9);
    printf("The Centigrade Temperature is=%.2f",c);
    getch();

}
