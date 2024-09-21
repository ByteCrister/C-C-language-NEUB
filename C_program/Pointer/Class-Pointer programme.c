#include<stdio.h>
int main()
{
     int aa[20],ab[20],*p[20],n,i;

     printf("Enter N :");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
          printf("Array1[%d]->",i);
          scanf("%d",&aa[i]);
          p[i]=&aa[i];
     }

     printf("\n\n");
     for(i=0;i<n;i++)
     {
          ab[i]=*p[i];
        printf("Array2[%d]-> %d",i,*p[i]);  //*p[i] or ab[i]......
        printf("\n");
     }

     getch();
}
