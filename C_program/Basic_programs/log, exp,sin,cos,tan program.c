#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f;
    printf("enter the value   :");
    scanf("%f",&a);
    b=(sin(a));
    printf("Sin(%f)  : %2.f\n",a,b);

    c=tan(a);
    printf("Tan(%f)  : %2.f\n",a,c);

    d=log(a);
    printf("Log(%f)  : %2.f\n",a,d);

    e=exp(a);
    printf("Exp(%f)  : %2.f\n",a,e);

    f=cos(a);
    printf("cos(%f)  : %2.f\n",a,f);



    return 0;
}

