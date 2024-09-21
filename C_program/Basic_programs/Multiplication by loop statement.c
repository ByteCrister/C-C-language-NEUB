#include<stdio.h>        /*Enter any number : if type 3 ,3 x 1= 3.*/

int main()
{
     while(1)
{
     int a,i;
     printf("Enter any number  :");
     scanf("%d",&a);

     for(i=1; i<=10; i++)
     {
          printf(" %d X %d = %d\n",a,i,a*i);


     }

}



     return 0;
}
