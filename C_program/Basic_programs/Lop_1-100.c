#include<stdio.h>
int main()
{
     int i=1,num,sum=0;
     printf("Enter 1~N number :");
     scanf("%d",&num);

     /*do
     {
          if(i%2==0)
          {
               printf("\n %d -> Even ",i);
          }
          else
               printf("\n %d -> Odd ",i);
          i++;
     }while(i<=num);*/
     while(i<=num)
     {
          if(i%2==0)
          {
               sum+=i;
          }

          i++;
     }
     printf("\n Summation of even number 1~%d = %d",num,sum);



     return 0;
}
