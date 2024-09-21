#include<stdio.h>
int main()
{
     int num,temp,sum=0,rem;
     printf("\n****ARMSTRONG PROGRAMME****");
     printf("\nEnter positive integer number :");
     scanf("%d",&num);
     temp=num;

     while(temp!=0)
     {
          rem=temp%10;
          sum=sum+pow(rem,3);  //example 0,1,370,371
          temp=temp/10;
     }
     if(sum==num)
     {
          printf("\n Armstrong number ");
     }
     else
          printf("\n Not armstrong number");


     return 0;
}
