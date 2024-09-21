#include<stdio.h>
int main()
{
     int a=5,b=15;

     int *p;
     p=&a;

     *p=b;

     b=*p+b-a;

     *p=b;

     printf(" %d\n",*p);
     printf(" %d\n",a);
     printf(" %d\n",b);

     a=*p+100;

     printf(" %d\n",a);
     printf(" %d\n",*p);



     getch();
}
