#include<stdio.h>
int main()
{
     int num,temp,rem,sum=0,fac,i;
     printf("Enter any integer number :");
     scanf("%d",&num);
     temp=num;
     while(temp!=0)
     {
          rem=temp%10;
          fac=1;
          for(i=1;i<=rem;i++)      //example 1,2,145
          {
               fac=fac*i;
          }

          sum=sum+fac;
          temp=temp/10;

     }
     if(sum==num)
          printf("\n %d is a Strong number ",num);
     else
          printf("\n %d is Not a strong number",num);

     getch();
}
