#include<stdio.h>
int size_;
void bubble_sort(int arr[])
{
    for(int i=0; i<=size_-2; i++)
    {
        for(int j=size_-1; j>=i+1; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int main()
{
    int a[]= {6,1,8,4,3,2,7,5};

    size_=sizeof(a)/sizeof(a[0]);

    printf("Unsorted : ");
    for(int i=0; i<size_; i++)
    {
        printf("%d ",a[i]);
    }

     bubble_sort(a);

     printf("\n\nSorted : ");
    for(int i=0; i<size_; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
