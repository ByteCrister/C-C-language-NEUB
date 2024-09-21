#include<stdio.h>
int main()
{
     int num=153,sum=0,num1;
     num1=num;
     while(num!=0){
          sum=sum + pow((num%10),3);
          num=num/10;
     }
     if(sum==num1){
          printf("\nIt's an amstrong number");
     }
     else{
          printf("\nNot an amstrong number");
     }
     return 0;
}
