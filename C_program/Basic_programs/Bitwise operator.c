#include<stdio.h>
int main()
{
     int a,b,c,d,e;
     printf("enter two number  :");
     scanf("%d%d",&a,&b);


     c=a&b;
     printf("%d & %d =%d \n",a,b,c);  //Bitwise and

     d=a|b;
     printf("%d | %d = %d \n",a,b,d); //Bitwise or

     e=a^b;
     printf("%d ^ %d = %d \n",a,b,e);  //Bitwise ExOr



     return 0;
}
