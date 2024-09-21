#include<stdio.h>

struct divrem
{

    int div;
    int rem;

};

class cl
{

public:
    int sum(int a,int b);
    int sub(int a,int b);
    int product(int a,int b);

    struct divrem division(int a,int b);

private:
    int result;

};

int cl::sum(int a,int b)
{
    result=a+b;
    return result;
}

int cl::sub(int a,int b)
{
    result=a-b;
    return result;
}

int cl::product(int a,int b)
{
    result=a*b;
    return result;
}

struct divrem cl::division(int a,int b)
{
    struct divrem dr;
    dr.div=a/b;
    dr.rem=a%b;

    return dr;
}

int main()
{
    int a,b,r;
    cl c;
    struct divrem dr;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    r=c.sum(a,b);
    printf("%-15s%s%d","\nSummation ",": ",r);

    r=c.sub(a,b);
    printf("%-15s%s%d","\nSubstraction ",": ",r);

    r=c.product(a,b);
    printf("%-15s%s%d","\nProduct ",": ",r);

    dr=c.division(a,b);
    printf("%-15s%s%d","\nDivision ",": ",dr.div);

    printf("%-15s%s%d","\nReminder ",": ",dr.rem);

    return 0;
}
