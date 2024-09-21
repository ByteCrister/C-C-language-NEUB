#include<stdio.h>
int bubSrt(int ar[],int ar2[],int n)
{
    int i,j,;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ar[j]>ar[j+1])
            {
                ar2[j]=ar[j+1];
            }
        }

    }
}

int main()
{
    int ar[30],ar2[30]n;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    bubSrt(ar,ar2,n);

    return 0;
}
