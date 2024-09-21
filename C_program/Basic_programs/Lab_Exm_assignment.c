#include<stdio.h>
int main()
{
     int num;
     printf("Enter month number : ");
     scanf("%d",&num);

     switch(num)
     {
          case 1:
          {
               printf("\nName of the month is : January");
               break;
          }
          case 2:
               {
                    printf("\nName of the month is : February");
                    break;
               }
          case 3:
               {
                    printf("\nName of the month is : March");
                    break;
               }
          case 4:
               {
                    printf("\nName of the month is : April");
                    break;
               }
          case 5:
               {
                    printf("\nName of the month is : May");
                    break;
               }
          case 6:
               {
                    printf("\nName of the month is : June");
                    break;
               }
          case 7:
               {
                    printf("\nName of the month is : July");
                    break;
               }
          case 8:
               {
                    printf("\nName of the month is : August");
                    break;
               }
          case 9:
               {
                    printf("\nName of the month is : September");
                    break;
               }
          case 10:
               {
                    printf("\nName of the month is : October");
                    break;
               }
          case 11:
               {
                    printf("\nName of the month is : November");
                    break;
               }
          case 12:
               {
                    printf("\nName of the month is : December");
                    break;
               }
          default:

               printf("\nInvalid month");
     }



     return 0;
}
