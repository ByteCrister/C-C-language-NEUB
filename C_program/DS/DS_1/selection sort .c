#include<stdio.h>
void sLsort(int ar[],int n)
{

    int min;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]>ar[j])
            {
                min=ar[i];
                ar[i]=ar[j];
                ar[j]=min;
            }
        }
    }


}
int main()
{
    int ar[30],i=0,n;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    while(i<n)
    {
        printf("Array[%d]-> ",i);
        scanf("%d",&ar[i]);
        i++;
    }
    i=0;
    printf("\nUnsorted -> ");
    while(i<n)
    {
        printf("%d ",ar[i]);
        i++;
    }
    sLsort(ar,n);
    printf("\nSorted -> ");
    i=0;
    while(i<n)
    {
        printf("%d ",ar[i]);
        i++;
    }


    return 0;
}
