#include<stdio.h>
#include<conio.h>

/*structurer for division and reminder*/
struct division  // structure name or data type 'division'
{

    int div,rem;   //Variable declared for division and reminder
};

class cal           //class declared
{

public:
    cal(int,int);
    cal(float,float);
    float fpro();
    int sum();
    int sub();
    int pro();
    struct division divrem();
private:
    int a,b;
    float a1,b1;
};

cal::cal(int s,int n)  //Value initialization by constructor
{
    a=s;
    b=n;
}
cal::cal(float d,float g)
{
    a1=d;
    b1=g;
}
float cal::fpro()
{
    return a1*b1;
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

struct division cal::divrem()
{
    struct division dr;
    dr.div=a/b;
    dr.rem=a%b;
    return dr;
}

int main()
{
    int a,b,i;
    float x,y,f;

    printf("Enter two integer : ");
    scanf("%d%d",&a,&b);
    printf("\nEnter two float : ");
    scanf("%f%f",&x,&y);

    cal ob1(a,b),ob2(x,y);

    struct division dr;
    dr=ob1.divrem();

    printf("%-15s%s%d","\nSummation ",":",ob1.sum());
    printf("%-15s%s%d","\nSubtraction ",":",ob1.sub());
    printf("%-15s%s%d","\nProduct ",":",ob1.pro());
    printf("%-15s%s%d","\nDivision ",":",dr.div);
    printf("%-15s%s%d","\nReminder ",":",dr.rem);
    printf("%-15s%s%.2f","\nFloat sum ",":",ob2.fpro());

    getch();
}
