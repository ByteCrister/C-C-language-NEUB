#include<stdio.h>
int main()
{
     int num,bin,a[20],i=0;
     printf("Enter the decimal number : ");
     scanf("%d",&num);

     while(num!=0)
     {
          a[i]=num%2;
          num=num/2;
          i++;
     }
     printf("\nBinary-> ");

     for(int j=i-1; j>=0; j--)
     {
          printf("%d ",a[j]);
     }

     return 0;
}
