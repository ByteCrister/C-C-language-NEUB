#include<stdio.h>
#include<conio.h>
struct div
{
    int div,rem;
};

class cal
{
public:
    cal(int,int);
    cal(float,float);


    float sf();
    int sum();
    int sub();
    int pro();
    struct div divrem();
private:
    int a,b;
    float a1,b1;
};
cal::cal(int x,int y)
{
    a=x;
    b=y;
}
cal::cal(float x1,float y1)
{
    a1=x1;
    b1=y1;
}
float cal::sf()
{
     return a1+b1;
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
struct div cal::divrem()
{
    struct div dr;
    dr.div=a/b;
    dr.rem=a%b;
    return dr;
};
int main()
{
    int a,b,n;
    printf("Enter two integer number : ");
    scanf("%d%d",&a,&b);

    float a1=2.99,b1=3.66,s;
    cal ob1(a1,b1);
    s=ob1.sf();
    printf("Float sum : %f \n",s);

    cal ob(a,b);

    n=ob.sum();
    printf("%-15s%s%d","\nSummation ",":",n);
    n=ob.sub();
    printf("%-15s%s%d","\nSubtraction ",":",n);
    n=ob.pro();
    printf("%-15s%s%d","\nProduct ",":",n);

    struct div dr;
    dr=ob.divrem();
    printf("%-15s%s%d","\nDivision ",":",dr.div);
    printf("%-15s%s%d","\nReminder ",":",dr.rem);


    getch();
}
