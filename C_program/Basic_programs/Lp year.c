#include<stdio.h>
int main()
{
     int num;
     printf("Enter the year :");
     scanf("%d",&num);

     if((num%400==0) || (num%4==0 && num%100!=0))
     {
          printf("\n Leap year");
     }

     else
          printf("\n Not leap year");


     return 0;
}
