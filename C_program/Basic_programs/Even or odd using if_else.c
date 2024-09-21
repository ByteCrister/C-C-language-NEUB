#include<stdio.h>
int main()
{
     int a;
     printf("Enter a integer number :");
     scanf("%d",&a);

     if(a%2==0)
     {
          printf("\n Even number");
     }
     else if(a%2!=0)
     {
          printf("\n Odd number");
     }
     else {
               printf("\n Enter a valid number ");
               }

     return 0;
}
