#include<stdio.h>
void bb(int ar[],int n)
{
    int i,j,tem;

    for(i=0; i<=n-2; i++)
    {
        for(j=n-1; j>=i+1; j--)
        {
            if(ar[j]<ar[j-1])
                tem=ar[j];
            ar[j]=ar[j-1];
            ar[j-1]=tem;
        }
    }
}
int main()
{
    int ar[20],i=0,n;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    while(i<n)
    {
        printf("Array[%d]->",i);
        scanf("%d",&ar[i]);
        i++;
    }

    printf("\nUnsorted-> ");

    for(i=0;i<n;i++)
    {
         printf("%d ",ar[i]);
    }

    bb(ar,n);

    printf("\nSorted-> ");

    for(i=0;i<n;i++)
    {
         printf("%d ",ar[i]);
    }

    return 0;
}
