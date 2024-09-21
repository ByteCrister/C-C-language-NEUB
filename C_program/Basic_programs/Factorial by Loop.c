#include<stdio.h>
int main()
{
     int i=1,a,b=1;
     printf("Enter a positive intejer number  :");
     scanf("%d",&a);


     do
      {


      b=b*i;
      i++;

      }
          while(i<=a);

      printf("%d\n",b);



     return 0;
}
