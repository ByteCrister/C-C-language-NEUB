#include<stdio.h>
int main()
{
    int ar[20],ar1[20],*p1,*p2,i,n;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    p1=ar;
    p2=ar1;

    for(i=0; i<n; i++)
    {
        printf("Array[%d]->",i);
        scanf("%d",&*(p1+i));
    }
    printf("\nBefore copying : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(p1+i));
    }

    p2=p1;

    printf("\nAfter copying : ");
    for(i=0;i<n;i++)
    {
         printf("%d ",*(p2+i));
    }

    return 0;
}
