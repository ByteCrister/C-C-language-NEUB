#include<stdio.h>
int main()
{
     int x;
     printf("Enter the year :");
     scanf("%d",&x);

     if((x%400==0)||(x%4==0 && x%100!=0))
     {
          printf("\n Leap year");
     }
     else
     {
          printf("\n Not leap year ");
     }
     return 0;
}
