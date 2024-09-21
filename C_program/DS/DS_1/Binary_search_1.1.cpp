#include<stdio.h>
int binary_search_(int arr[],int key,int Beg,int End)
{
    int mid;

    if(Beg>End)
        return -1;
    else
    {
        mid=(Beg+End)/2;
    }
    if(arr[mid]==key)
        return mid+1;

    else if(key>arr[mid])
        binary_search_(arr,key,mid+1,End);

    else
        binary_search_(arr,key,Beg,mid-1);
}
int main()
{
    int a[]= {1,3,5,6,7,8,11,13,15,22};

    int position=binary_search_(a,1,0,9);

    if(position==-1)
        printf("Data not found !");
    else
    {
        printf("\nPosition = %d",position);
    }

    return 0;
}
