#include<stdio.h>
int main()
{
     int a,b,c;
     printf("Enter three integer number :");
     scanf("%d%d%d",&a,&b,&c);

     if(a>b && a>c)
     {
          printf("\n %d is large number ",a);
     }
     else if(b>c)
     {
          printf("\n %d is large number ",b);
     }

     else
          printf("\n %d is large number ",c);


     return 0;
}
