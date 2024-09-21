#include<stdio.h>
int large();
int main()
{
    int ar[100],i,n;
    printf("How many numbers you will enter :");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("Array[%d]->",i);
        scanf("%d",&ar[i]);
    }

    printf("\nLargest number :%d",large(ar,n));


    return 0;
}

int large( int ar[],int n)
{
    int i,large=ar[0];
    for(i=1; i<n; i++)
    {
        if(ar[i]>large)
          {
                 large=ar[i];
          }

    }
    return large;
}

