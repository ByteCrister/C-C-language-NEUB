#include<stdio.h>
void swp();
int main()
{
     int a,b;
     printf("Enter two number :");
     scanf("%d%d",&a,&b);

     swp(&a,&b);

     printf("a = %d \n",a);
     printf("a = %d \n",b);

     return 0;
}

void swp(int *p1,int *p2)
{
     int tem;
     tem=*p1;
     *p1=*p2;
     *p2=tem;
}
