#include<stdio.h>
int main()
{
     int num,rem,tem,count=0;
     printf("Enter an integer number :");
     scanf("%d",&num);
     tem=num;
     while(tem!=0)
     {
          tem=tem/10;
          count++;
     }
     printf("\n Number of digits = %d",count);

     return 0;

}

