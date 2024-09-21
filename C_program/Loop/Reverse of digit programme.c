#include<stdio.h>
int main()
{
     int num,temp,rem,sum=0;
     printf("Enter a positive integer value :");
     scanf("%d",&num);
     temp=num;
          printf("\nReverse of the digits will be=");

     while(temp!=0)
     {
          rem=temp%10;
          sum=sum*10+rem;
          temp/=10;
     }

     printf("%d",sum);

     return 0;
}
