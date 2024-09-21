#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter a integer number   :");       // For this program we have to use integer value
    scanf("%d",&a);
    b=abs(a);
            printf("The abs value is %d\n",b);
    c=sqrt(a);
            printf("The sqrt value is %d\n",c);
    d=pow(a,2);
                printf("The %d^2 value is %d\n",a,d);

     return 0;
}
