#include<stdio.h>
int main()
{
     int ar[20],n;
     printf("Enter number of elements:");
     scanf("%d",&n);

     for(int i=0;i<n;i++)
     {
          printf("element-%d: ",i);
          scanf("%d",&ar[i]);
     }
     printf("\nThe numbers are :");
     f(n,ar);

     getch();
}

void f(int a,int ar[])
{
     int b=0;
     if(a<=b)
     {
          printf("%d ",ar[b]);
          f(b+1,ar[b]);
     }
     //printf("%d ",ar[b]);
}
