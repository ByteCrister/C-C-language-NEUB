#include <stdio.h>
#include <math.h>
int main()
{
    double a=5.50;
    double result=round(a);
    printf("round(%.2lf)=%.2lf",a,result);
    getch();
}
