#include<stdio.h>
struct divrem{

     int div;
     int rem;
};

class cal{
public:
     cal(int ,int );
     sum();
     sub();
     pro();

     struct divrem division();
private:
     int a,b;
};

//***** Class method *****

cal::cal(int x,int y)
{
     a=x;
     b=y;
}
int cal::sum()
{
     return a+b;
}
int cal::sub()
{
     return a-b;
}
int cal::pro()
{
     return a*b;
}
struct divrem cal::division()
{
     struct divrem dr;
     dr.div=a/b;
     dr.rem=a%b;
     return dr;
}

int main()
{
     int a,b,r;
     struct divrem dr;

     printf("Enter two integer number : ");
     scanf("%d%d",&a,&b);

     cal cl(a,b);

     r=cl.sum();
     printf("%-15s%s%d","\nSummation ",": ",r);

     r=cl.sub();
     printf("%-15s%s%d","\nSubstraction ",": ",r);

     r=cl.pro();
     printf("%-15s%s%d","\nSummation ",": ",r);

     dr=cl.division();
     printf("%-15s%s%d","\nDivision ",": ",dr.div);

     printf("%-15s%s%d","\nReminder ",": ",dr.rem);

     return 0;
}
