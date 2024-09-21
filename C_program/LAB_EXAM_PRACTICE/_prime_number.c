#include<stdio.h>
int main()
{
     int num=4,count=0;
     for(int i=2; i<num; i++){
          if(num%i==0){
               count++;
               break;
          }
     }
     if(count!=0){
          printf("\nPrime number");
     }
     else
          printf("\nNot a prime number");

     return 0;
}
