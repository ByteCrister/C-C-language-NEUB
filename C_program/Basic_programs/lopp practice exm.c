#include<stdio.h>
int main()
{
     int i=1,sum=0;
     for(i=1;i<100;i+=3)
     {
          sum+=i;
          printf("\n sum=%d",sum);
          printf("\n i=%d",i);
     }
          printf("\n %d",sum);

     return 0;
}
