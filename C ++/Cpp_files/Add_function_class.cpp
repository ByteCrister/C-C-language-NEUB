#include<stdio.h>
struct division
{

    int div;
    int rem;

};
class calculator
{

public:
    int input1()
    {
        int a;
        scanf("%d",&a);
        return a;
    }
    int input2()
    {
        int a;
        scanf("%d",&a);
        return a;
    }

    int sum(int a,int b)
    {
        return a+b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }
    int pro(int a,int b)
    {
        return a*b;
    }

    struct division DivRem(int a,int b)
    {
        struct division dr;
        dr.div=a/b;
        dr.rem=a%b;

        return dr;
    }

};
int main()
{
    calculator ob;


    printf("Enter two integer number : ");
    int a=ob.input1();
    int b=ob.input2();
    int n;


    n=ob.sum(a,b);
    printf("%-15s%s%d","\nSummation ",":",n);

    n=ob.sub(a,b);
    printf("%-15s%s%d","\nSubstraction ",":",n);

    n=ob.pro(a,b);
    printf("%-15s%s%d","\nProduct ",":",n);

    struct division dr;

    dr=ob.DivRem(a,b);

    printf("%-15s%s%d","\nDivision ",":",dr.div);
    printf("%-15s%s%d","\nReminder ",":",dr.rem);

    return 0;
}
