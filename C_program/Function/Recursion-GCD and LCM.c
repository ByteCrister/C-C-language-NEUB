#include<stdio.h>
int Gcd(int n1,int n2,int rem);
int main()
{
     int n1,n2,rem;
     printf("Enter two natural number for GCD :");
     scanf("%d%d",&n1,&n2);

     int n=Gcd(n1,n2,rem);
     printf("The GCD value of %d and %d is: %d",n1,n2,n);

     return 0;
}

int Gcd(int n1,int n2,int rem)
{
     int gcd;
                    //n1=60 , n2=30
     if(n2!=0)
     {
          rem=n1%n2;
          n1=n2;
          n2=rem;
          Gcd(n1,n2,rem);
     }
     gcd=n1;
     return gcd;
}
