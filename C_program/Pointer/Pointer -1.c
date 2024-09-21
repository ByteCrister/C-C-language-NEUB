#include<stdio.h>
int main()
{
     int a=10;

     int *p;

     p=&a;

     printf("Value of a=%d\n",*p);
     printf("Address of a=%u\n",p);
     printf("Value of a=%d\n",a);
     printf("Address of a=%u\n",&a);
     printf("Address of pointer =%u",&p);

     return 0;
}
