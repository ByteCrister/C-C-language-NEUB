#include<stdio.h>
void scanArr(int ar[100][100],int r,int c)
{
    int i,j;
    printf("\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("index[%d][%d]->",i,j);
            scanf("%d",&ar[i][j]);
        }
    }
}
void printArr(int ar[100][100],int r,int c)
{
    printf("\nArray\n");
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}

void sumOfrows(int ar1[100][100],int r,int c)
{
    printf("\nSummation of rows\n");
    int i,j,sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum+=ar1[i][j];
        }
        printf("|");
        printf("%d",sum);
        printf("|");
        printf("\n");
        sum=0;
    }
}
void sumofcolumns(int ar[100][100],int r,int c)
{
    int i,j,k,sum=0;
    printf("\nSummation Of columns\n");

    printf("|");
    for(k=0; k<c; k++)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(k==j)
                {
                    sum+=ar[i][j];
                }
            }
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("|");

}
int main()
{
    int ar[100][100],r,c;
    printf("Enter row and column :");
    scanf("%d%d",&r,&c);

    scanArr(ar,r,c);
    printArr(ar,r,c);
    sumOfrows(ar,r,c);
    sumofcolumns(ar,r,c);

    return 0;
}
