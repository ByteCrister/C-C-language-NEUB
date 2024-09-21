#include<stdio.h>
int main()
{
     int a,b,a1,b1,rem,gcd,lcm;
     printf("Enter two positive integer number for GCD : ");
     scanf("%d%d",&a,&b);

     a1=a;
     b1=b;

     while(b!=0)
     {
          rem=a%b;
          a=b;
          b=rem;
     }
     gcd=a;
     lcm=(a1*b1)/gcd;
     printf("\n GCD of %d and %d -> %d",a1,b1,gcd);
     printf("\n LCM of %d and %d -> %d",a1,b1,lcm);

     return 0;
}
