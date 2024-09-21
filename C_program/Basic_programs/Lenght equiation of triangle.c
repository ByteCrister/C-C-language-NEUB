#include <stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("enter three values=");
    scanf("%f %f %f",&a,&b,&c);
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n The Result is=%.2f",area);
    getch();
}
