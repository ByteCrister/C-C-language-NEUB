#include <stdio.h>
int main()
{
    double X;
    printf("log=");
    scanf("%.2lf",&X);
    double result=log(X);
    printf("log(%.2lf)=",result);
    getch();
}
