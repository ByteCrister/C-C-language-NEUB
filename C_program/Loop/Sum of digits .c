#include<stdio.h>
int main()
{
     int n,rem,sum=0,temp;
     printf("Enter positive integer numbers :");
     scanf("%d",&n);

     temp=n;

     while(temp!=0)
     {
          rem=temp%10;
          sum+=rem;
          temp/=10;
     }

     printf("\n sum of digits are = %d",sum);

     return 0;
}
