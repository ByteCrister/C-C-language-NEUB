#include<stdio.h>
int sum(int n)
{
     static int _Sum=0;
     if(n!=0){
          _Sum+=n%10;
          sum(n/10);
     }
     else
          return _Sum;
}
int main()
{
     int n=1234;
     printf("\nSum of each digits : %d",sum(n));

     return 0;
}
