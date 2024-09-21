#include<stdio.h>

void sum(int r1,int r2,int c1,int c2)
{
    int ar1[100][100],ar2[100][100],ar3[100][100],r,c,sum;

    for(r=0; r<r1; r++)
    {
        for(c=0; c<c1; c++)
        {
            printf("Array 1 [%d][%d] ->",r,c);
            scanf("%d",&ar1[r][c]);
        }
        printf("\n");
    }
    printf("\n\nArraay 1\n\n");
    for(r=0; r<r1; r++)
    {
        for(c=0; c<c1; c++)
        {
            printf("%d ",ar1[r][c]);
        }

        printf("\n");
    }

    for(r=0; r<r2; r++)
    {
        for(c=0; c<c2; c++)
        {
            printf("Array 2 [%d][%d] ->",r,c);
            scanf("%d",&ar2[r][c]);
        }
        printf("\n");
    }
    printf("\n\nArraay 2\n\n");
    for(r=0; r<r2; r++)
    {
        for(c=0; c<c2; c++)
        {
            printf("%d ",ar2[r][c]);
        }

        printf("\n");
    }

    printf("\n Sum of array's \n");
    for(r=0; r<r1; r++)
    {
        for(c=0; c<c2; c++)
        {
            ar3[r][c]=ar1[r][c]+ar2[r][c];
        }
    }

    for(r=0; r<r1; r++)
    {
        for(c=0; c<c2; c++)
        {
            printf("%d ",ar3[r][c]);
        }
        printf("\n");
    }



}
int main()
{
    int r1,c1,r2,c2;
    printf("Enter row and column for first array :");
    scanf("%d%d",&r1,&c1);


    printf("Enter same row and column for second array :");
    scanf("%d%d",&r2,&c2);

    sum(r1,r2,c1,c2);



    return 0;
}
