#include<stdio.h>

void ar(int x[],int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          printf("%d",x[i]);
     }
}

int main()
{
     int ar1[100],n,i;

     printf("Enter n :");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          printf("Array[%d] :",i);
          scanf("%d",&ar1[i]);
     }
     printf("\n");
     ar(ar1,n);

}
