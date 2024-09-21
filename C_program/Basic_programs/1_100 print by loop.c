#include <stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d",&b);
     printf("The first %d natural number and there sum is :\n",b);
    for(a=1;a<=b;a++)
   {

      printf(" %d",a);
      sum=sum+a;


   }
   printf("\n sum = %d",sum);

   return 0;
}
