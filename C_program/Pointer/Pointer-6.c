#include<stdio.h>
int main()
{
    int ar[100],i,n;
    printf("Enter number of elements :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Array[%d]->",i);
        scanf("%d",&ar[i]);
    }

    int *p;
    for(i=0; i<n; i++)
    {
        p=&ar[i];
        printf(" %d",*p);
    }



    return 0;
}
