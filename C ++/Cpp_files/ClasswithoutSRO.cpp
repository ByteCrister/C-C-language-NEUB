#include<stdio.h>
struct divrem
{

    int div;
    int rem;

};
class calculator
{

public:
    int sum(int a,int b)
    {
        result=a+b;
        return result;
    }
    int sub(int a,int b)
    {
        result=a-b;
        return result;
    }
    int product(int a,int b)
    {
        result=a*b;
        return result;
    }
    struct divrem division(int a,int b)
    {
        struct divrem dr;
        dr.div=a/b;
        dr.rem=a%b;
        return dr;
    }

private:
    int result;
};
int main()
{
    calculator cal;
    int a,b,r;
    printf("Enter two integer number : ");
    scanf("%d%d",&a,&b);

    r=cal.sum(a,b);
    printf("%-15s%s%d","\nsummation ",": ",r);

    r=cal.sub(a,b);
    printf("%-15s%s%d","\nsubstraction ",": ",r);

    r=cal.product(a,b);
    printf("%-15s%s%d","\nproduct ",": ",r);

    struct divrem dr;
    dr=cal.division(a,b);

    printf("%-15s%s%d","\nDivision ",": ",dr.div);
    printf("%-15s%s%d","\nReminder ",": ",dr.rem);

    return 0;
}
