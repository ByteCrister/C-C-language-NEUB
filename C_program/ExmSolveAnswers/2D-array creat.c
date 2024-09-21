
//simple matrix creat
#include<stdio.h>
int main()
{
    int ar[25][25],i,j,r,c;
    printf("Enter number of row and column : ");
    scanf("%d%d",&r,&c);

    printf("\nArray\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("index[%d][%d]->",i,j);
            scanf("%d",&ar[i][j]);
        }
    }

    printf("\nMatrix\n");
    printf("|");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf(" %d ",ar[i][j]);
        }
        printf("|\n");
        if(i<r-1)
            printf("|");
    }



    return 0;
}
