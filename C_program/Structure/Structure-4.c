#include<stdio.h>
 union test
 {
      int a,b;
 };
int main()
{
     union test t1,t2;

     t1.a=10;
     printf("%d\n",t1.b);

     t1.b=20;
     printf("%d",t1.a);


     return 0;
}


//introduction to union;
