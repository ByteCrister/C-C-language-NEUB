#include<stdio.h>
int main()
{
     double a,b;
     char a1;


     printf("Enter the operator = '+'  '*'  '-'  '/'   :");
     scanf("%c",&a1);

     printf("Enter two number  :");
     scanf("%lf %lf",&a,&b);


     switch(a1)

    {
     case '+':
          {
               printf(" %lf + %lf =%.2lf",a,b,a+b);
          break;
          }




     case '*':
          {
               printf(" %lf * %lf =%.2lf",a,b,a*b);
          break;
          }




     case '-':
          {
               printf(" %lf - %lf =%.2lf",a,b,a-b);
          break;

     }


     case '/':
        {

          printf(" %lf / %lf =%.2lf",a,b,a/b);
          break;

          }

     default:

            printf("Error !!");

   }


return 0;
}
