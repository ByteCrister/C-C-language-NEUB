#include<stdio.h>
int size_;
int linear_search(int arr[],int key)
{
    int i=0;
    while(i<size_ && arr[i]!=key)
    {
        i++;
    }
    if(i==size_)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}
int main()
{
    int arr[]= {6,3,8,9,10,4,2,1,5,11,55,32},n;

    size_=sizeof(arr)/sizeof(arr[0]);

    printf("Enter the value you want to search : ");
    scanf("%d",&n);

    int pos=linear_search(arr,n);
    if(pos==-1)
    {
        printf("\nData not found !");
    }
    else
    {
        printf("\nPosition of the data : %d",pos);
    }

    return 0;
}
