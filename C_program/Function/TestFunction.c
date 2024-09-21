#include<stdio.h>
void fun();
int main()
{
    int ar[20],n,i;
    printf("Enter N :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Array[%d]-> ",i);
        scanf("%d",&ar[i]);
    }
    fun(ar,n);
    printf("\nArray[1]-> %d",ar[1]);
}

void fun(int ar[],int n)
{
    ar[1]=10;
}
