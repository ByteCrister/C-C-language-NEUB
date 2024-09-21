#include<stdio.h>
int main()
{
     int a[20],i,n,search,num;
     printf("Enter N :");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          printf("Array[%d]->",i);
          scanf("%d",&a[i]);
     }

     printf("\nEnter the number, you want to search ->");
     scanf("%d",&search);

     for(i=0;i<n;i++)
     {
         if(search==a[i])
         {
              num=a[i];
              break;
         }
     }
     printf("\nYou searched for %d which is in Array[%d]th position",num,i);


     return 0;
}
