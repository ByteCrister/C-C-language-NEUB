#include<stdio.h>

int s_(int a)
{
     return pow(a,2);

}

int main()
{
     int x;
     printf("Enter an integer number : ");
     scanf("%d",&x);
     printf("\n Square of %d -> %d",x,s_(x));


     return 0;
}
