#include<stdio.h>
int main()
{
     int num,a=0,b=1,fibo=0,i;
     printf("Enter N for fibo number : ");
     scanf("%d",&num);

     printf("\n Fibonacci number -> ");
     for(i=0;i<num;i++)
     {
          if(i<=1)
          {
               fibo=i;
          }
          else{

          fibo=a+b;
          a=b;
          b=fibo;
          }
          printf("%d ",fibo);
     }


     return 0;
}
