#include<stdio.h>
enum alpa
{
     a,b,c,d,e
};

int main()
{
     enum alpa a1,a2;
     a1=e;
     a2=c;
     printf("a=%d\n",a1);
     printf("a=%d\n",a2);
     printf("a=%d\n",a2-a1);

     return 0;
}
