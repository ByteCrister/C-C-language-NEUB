#include<stdio.h>
float area(float a,float b);
int main()
{
     float b,h,ar;
     printf("Enter BASE and HEIGHT : ");
     scanf("%f %f",&b,&h);

     ar=area(b,h);
     printf("\nArea : %.2f",ar);

     return 0;
}

float area(float a,float b)
{
     float ret=0.5*a*b;

     return ret;
}
