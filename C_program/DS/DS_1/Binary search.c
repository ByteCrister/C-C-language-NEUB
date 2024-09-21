#include<stdio.h>
int bin(int ar[],int beg,int end,int key)
{
    int mid;
    mid=(beg+end)/2;

    if(ar[mid]==key)
        return mid+1;

    if(key>ar[mid])
        bin(ar,mid+1,end,key);

    else
        bin(ar,beg,mid-1,key);
}
int main()
{
    int ar[30],n,a;
    printf("Enter number of elements :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("\narray[%d]->",i);
        scanf("%d",&ar[i]);
    }
    printf("Enter the number you wanna search :");
    scanf("%d",&a);

    printf("\nPosition of %d -> %d",a, bin(ar,0,n-1,a));

    return 0;
}
