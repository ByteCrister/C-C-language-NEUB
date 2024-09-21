#include<stdio.h>
struct divrem
{

    int div;
    int rem;

};
class cal
{

public:

    int sum(int a,int b);
    int sub(int a,int b);
    int product(int a,int b);

    struct divrem direm(int a,int b);

private:
    int result;

};

int cal::sum(int a,int b)
{
    result=a+b;
    return result;
}

int cal::sub(int a,int b)
{
    result=a-b;
    return result;
}

int cal::product(int a,int b)
{
    result=a*b;
    return result;
}

struct divrem cal::direm(int a,int b)
{
    struct divrem dr;
    dr.div=a/b;
    dr.rem=a%b;
    return dr;
}
int main()
{
    int a,b,r;
    printf("Enter two integer number : ");
    scanf("%d%d",&a,&b);

     cal cl;

     r=cl.sum(a,b);
     printf("%-15s%s%d","\nSummation ",":",r);

     r=cl.sub(a,b);
     printf("%-15s%s%d","\nSubstraction ",":",r);

     r=cl.product(a,b);
     printf("%-15s%s%d","\nProduct ",":",r);

     struct divrem dr=cl.direm(a,b);
     printf("%-15s%s%d","\nDivision ",":",dr.div);
     printf("%-15s%s%d","\nReminder ",":",dr.rem );

    return 0;
}
