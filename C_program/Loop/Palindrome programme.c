#include<stdio.h>
int main()
{
     int num,temp,rem,sum=0;
     printf("Enter a positive integer value :");
     scanf("%d",&num);
     temp=num;
     while(temp!=0)
     {
          rem=temp%10;
          sum=sum*10+rem;
          temp=temp/10;
     }
     if(sum==num)
     {
          printf("\n Palindrome number %d == %d",sum,num);
     }
     else
          printf("\n Not palindrome %d != %d",sum,num);


     return 0;
}
