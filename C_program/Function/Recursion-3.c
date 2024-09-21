#include<stdio.h>
int main()
{
     int n,v;
     printf("Enter base number for summation :");
     scanf("%d",&n);

     printf("\nThe sum of numbers from %d to %d :",1,n);

     v=sum(n);

     printf(" %d",v);

     printf("\n\n");

     return 0;
}

int sum(int a)
{
     if(a==1)
     return 1;
     return a+sum(a-1);
}
