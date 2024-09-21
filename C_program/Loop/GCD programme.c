#include<stdio.h>
int main()
{
     int a,b,rem,gcd,lcm,mul;
     printf("Enter two integer number : ");
     scanf("%d%d",&a,&b);
     mul=a*b; // LCM =(a*b)/GCD.
     while(b!=0)                   //This loop will continue until b=0.
     {
          rem=a%b;
          a=b;
          b=rem;
     }
     gcd=a;
     lcm=mul/gcd;
     printf("\nGCD = %d",a);
     printf("\nLCM = %d",lcm);

     return 0;

}
