#include<stdio.h>
int fac(int n){
     if(n==0)
          return 1;
     else
          return fac(n-1)*n;
}
int main()
{
     int n=5;
     printf("Factorial(%d)-> %d",n,fac(n));

     return 0;
}
