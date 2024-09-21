#include<stdio.h>
main()
{
    int a,b,sum,sub,mul,remi;float div,avg;
    printf("Enter two intejer number :");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d + %d =%d\n",a,b,sum);
    sub=a-b;
    printf("%d - %d =%d\n",a,b,sub);
    div=(float)a/b;
    printf("%d / %d =%.2f\n",a,b,div);
    mul=a*b;
    printf("%d * %d =%d\n",a,b,mul);
    remi=a%b;
    printf("%d % %d =%d\n",a,b,remi);
    avg=(float)sum/2;
    printf("%d avg %d =%.2f\n",a,b,avg);
    return 0;
}

