#include<stdio.h>
int main()
{
     int a,i,b=0;
     printf("Enter an integer positive number :");
     scanf("%d",&a);

     for(i=2;i<a;i++)
     {
          if(a%i==0)
          {
               b++;
               break;
          }

     }
     if(b==0)
          printf("\nPrime number");
     else
          printf("\nNot a prime number");

     return 0;
}
