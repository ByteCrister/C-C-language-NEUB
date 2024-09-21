#include<stdio.h>
class calculator
{
public:
    int a,b;
    float aa,bb;
};
int main()
{
    calculator ob,ob2;

    ob.a=10;
    ob.b=20;
    ob2.aa=19;
    ob2.bb=18;

    printf("a= %d, b= %d, c= %.2f, d= %.2f \n",ob.a,ob.b,ob2.aa,ob2.bb);


    return 0;
}
