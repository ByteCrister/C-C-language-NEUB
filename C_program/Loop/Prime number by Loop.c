#include<stdio.h>
int main()
{
     while(1)
    {

     int i,a,count=0;
     printf("Enter a intejer number :");
     scanf("%d",&a);

     for (i=2; i<a; i++)

     {
          if (a%i==0)

          {
               count++;
               break;
          }

     }

          if(count==0)
               printf("Prime number\n");

          else
               printf("Not Prime number\n");


    }
     getch();
}
