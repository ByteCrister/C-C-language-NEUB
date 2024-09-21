#include<stdio.h>
int sum(int n){
     if(n==0)
          return 0;
     else
          return sum(n-1)+n;
}
int main()
{
     int n=3;

     printf("sum of digits-> %d",sum(n));
     return 0;
}
