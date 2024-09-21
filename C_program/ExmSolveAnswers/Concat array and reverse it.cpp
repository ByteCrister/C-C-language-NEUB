#include<stdio.h>
int printArray1(int ar1[])
{
    int n,i;
    printf("Enter number of elements for array-1 : ");
    scanf("%d",&n);
    printf("\nArray-1\n");
    for(i=0; i<n; i++)
    {
        printf("index[%d]->",i);
        scanf("%d",&ar1[i]);
    }

    return n;
}
int printArray2(int ar2[])
{
    int n,i;
    printf("\n\nEnter number of elements for array-2 : ");
    scanf("%d",&n);
    printf("\nArray-1\n");
    for(i=0; i<n; i++)
    {
        printf("index[%d]->",i);
        scanf("%d",&ar2[i]);
    }

    return n;
}
void addArrays(int ar1[],int ar2[],int n1,int n2)
{
    int i,j=0;
    for(i=n1; i<n1+n2; i++)
    {
        ar1[i]=ar2[j];
        j++;
    }
}
int revArr(int ar1[],int ar3[],int n)
{
    int i,j=n-1;
    for(i=0; i<n; i++)
    {
        ar3[i]=ar1[j];
        j--;
    }
    return n;

}
void printRevArray(int arr[],int n)
{
    printf("\nArray concat and reverse : ");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int ar1[100],ar2[100],ar3[100],n1,n2,n3;

    n1=printArray1(ar1);
    n2=printArray2(ar2);
    addArrays(ar1,ar2,n1,n2);
    n3=revArr(ar1,ar3,n1+n2);
    printRevArray(ar3,n3);

    return 0;
}
