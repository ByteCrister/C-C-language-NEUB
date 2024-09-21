#include<stdio.h>
int main()
{
    int ar1[20][20],ar2[20][20],ar3[20][20],r1,r2,c1,c2,sum=0;
    printf("Enter row and column for the first array : ");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter row and column for the second array : ");
    scanf("%d%d",&r2,&c2);

    while(r1!=c2)
    {

        printf("\nEnter correct informations ->> ");

        printf("Enter row and column for the first array : ");
        scanf("%d%d",&r1,&c1);

        printf("\nEnter row and column for the second array : ");
        scanf("%d%d",&r2,&c2);

    }

    printf("\nEnter values for first array ->>");
    for(int i1=0; i1<r1; i1++)
    {
        for(int j1=0; j1<c1; j1++)
        {
            printf("\nArray1[%d][%d]->",i1,j1);
            scanf("%d",&ar1[i1][j1]);
        }
    }

    printf("\nEnter values for second array->>");
    for(int i1=0; i1<r2; i1++)
    {
        for(int j1=0; j1<c2; j1++)
        {
            printf("\nArray2[%d][%d]->",i1,j1);
            scanf("%d",&ar2[i1][j1]);
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                sum+=ar1[i][k]*ar2[k][j];
            }
            ar3[i][j]=sum;
            sum=0;
        }

    }

    printf("\nArray multiplication ->>\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("%d ",ar3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
