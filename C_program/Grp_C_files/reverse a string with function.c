#include<stdio.h>

void arr_copy(int a1[],int a2[],int n)
{
    int i;
    for(i=0; i<n/2; i++)
    {
        int temp=a1[i];
        a2[i]=a1[n-i-1];
        a2[n-i-1]=temp;
    }

}
int main ()
{
    int n,i,arr1[100],arr2[100];
    printf("Input the number of element you wanna take in array: ");
    scanf("%d",&n);
    printf("Input %d array element: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    arr_copy(arr1,arr2,n);

    printf("\n The element store in the 1st array are:  ");
    for(i=0; i<n; i++)
    {
        printf("%d",arr1[i]);
    }
    //printf("\n The element reverse into the 2nd array are: ")

    for(i=0; i<n; i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;
}




