#include<stdio.h>

void max(int a[],int n)
{
    int i,max=0;

    for(i=0; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("\nMax number is %d",max);
}

int main()
{
    int ar[100],i,n;
    printf("Enter N for array :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Array[%d]->",i);
        scanf("%d",&ar[i]);
    }
    printf("\n");

    max(ar,n);

    getch();
}
