#include<stdio.h>
int main()
{
    int mat1[100][100],mat2[100][100],mat3[100][100],i,j,r,c;

    printf("Enter ROW and COLUMN for two MATRIX : ");
    scanf("%d%d",&r,&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nMATRIX 1[%d][%d]->",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nMATRIX 2[%d][%d]->",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n **Summation of two MATRIX **\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }





    return 0;
}
