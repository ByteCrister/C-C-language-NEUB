#include<stdio.h>
int main()
{
     int a,b,cel,fah;
     printf("Temperature conversion\n");
     printf(" 1. Fahrenheit to celsius\n");
     printf("2. Celsius to fahrenheit \n");
     printf("Enter your choice \n:");
     scanf("%d",&a);

     switch(a)
     {
     case 1:
          {
               printf("Enter your value :");
               scanf("%d",&b);
              cel=(5*(b-32)/9);
              printf("Result :%d",cel);

          }
    break;

     case 2:
          {
               printf("Enter your value :");
               scanf("%d",&b);
               fah=((b*9)/5)+32;
               printf("Result :%d",fah);


          }
     break;

     default:
          printf("You haven't entered valid number \n");

    }


     return 0;
}
