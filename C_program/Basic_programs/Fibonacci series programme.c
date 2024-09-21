#include<stdio.h>
int main()
{
     int num1=0,num2=1,i=0,fibo,n;
     printf("Enter an integer number :");
     scanf("%d",&n);

     while(i<n)
     {
          if(i<=1)
          {
               fibo=i;
          }
          else{
               fibo=num1+num2;
               num1=num2;
               num2=fibo;
          }
          printf("%d ",fibo);
          i++;
     }


     return 0;
}
