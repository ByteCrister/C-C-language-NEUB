#include<stdio.h>
int main()
{
     int ar[20],i,n,*pt,sum=0;
     printf("Enter number of elements :");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          printf("Array[%d]->",i);
          scanf("%d",ar+i);

          sum+=*(ar+i);
     }

     printf("\nSum = %d",sum);

     return 0;
}
