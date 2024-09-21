#include<stdio.h>
void power(float a,float b);
int main()
{
     float a,b,call;
     printf("Enter base : ");
     scanf("%f",&a);

     printf("Enter Exponent : ");
     scanf("%f",&b);

     printf("\n Power using library function -> %.2f",pow(a,b));

     power(a,b);


     getch();
}

void power(float a,float b)
{
     float i,p=1;

     for(i=1;i<=b;i++)
     {
          p=p*a;
     }
     printf("\n Power -> %.2f",p);

}
