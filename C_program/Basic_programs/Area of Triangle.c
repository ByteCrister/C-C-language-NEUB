#include <stdio.h>
int main()
{
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    float a,b,area;
    printf("Enter Base=");
    scanf("%f",&a);
    printf("Enter height=");
    scanf("%f",&b);
    area=(float)1/2*a*b;
    printf("\n The result is=%.2f",area);
    

}
