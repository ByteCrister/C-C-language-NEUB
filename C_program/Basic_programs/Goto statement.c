#include<stdio.h>
int main()
{

     int i=1;

 value:
       printf("%d\t",i);
       i++;

     if(i<=10)
          goto value;


     return 0;
}
