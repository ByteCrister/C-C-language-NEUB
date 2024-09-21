//2 array sum
#include<stdio.h>
int main()
{
    int arr1[20][20],arr2[20][20],r,c;
    printf("Enter the value of arr1: ");
    scanf("%d%d",&r,&c);

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Array[%d][%d]-> ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
             arr2[j][i] = arr1[i][j];
        }
    }


    printf("\nTranspose\n");

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }


    return ;
}

