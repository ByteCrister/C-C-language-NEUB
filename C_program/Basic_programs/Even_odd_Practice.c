#include<stdio.h>
int main()
{
     int num;
     printf("Enter an integer number :");
     scanf("%d",&num);

     if(num%2==0)
     {
          printf("\n Even number ");
     }
     else if(num%2!=0)
     {
          printf("\nOdd number ");
     }
     else
          printf("\n Invalid number ");


     return 0;
}
