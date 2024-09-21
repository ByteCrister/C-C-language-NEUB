#include<stdio.h>
void Input(int ar1[],int ar2[],int n1,int n2)
{
    printf("\nArray 1 info \n");
    for(i=0; i<n1; i++)
    {
        printf("\nArray1[%d]->",i);
        scanf("%d",&ar1[i]);
    }
    printf("\nArray 2 info \n");
    for(i=0; i<n2; i++)
    {
        printf("\nArray2[%d]->",i);
        scanf("%d",&ar2[i]);
    }

}
void Print(int ar1[],int ar2[],int n1,int n2)
{
     printf("\nArray 1\n");
     for(i=0;i<n1;i++)
     {
          printf("%d ",ar1[i]);
     }
}

int main()
{
    int ar1[100],ar2[100],n1,n2;

    printf("Enter number of elements for first array :");
    scanf("%d",&n1);

    printf("\nEnter number of elements for second array :");
    scanf("%d",&n2);

    Input(ar1,ar2,n1,n2);
    Print(ar1,ar2,n1,n2);

    getch();
}
