#include<stdio.h>
int main()
{
    int ar1[20],ar2[20],*p1,*p2,n,i;

    printf("Enter number of elements :");
    scanf("%d",&n);

    printf("\nEnter array elements \n");

    p1=&ar1;
    p2=&ar2;

    for(i=0; i<n; i++)
    {
        printf("Array[%d]-> ",i);
        scanf("%d",&*(p1+i));
    }

    printf("\n[Array before copy]\n");

    for(i=0; i<n; i++)
    {
        printf("%d ",*(p1+i));
    }

    for(i=0; i<n; i++)
    {
        *(p2+i)=*(p1+i);
    }

    printf("\n\n[Array after copy]\n");

    for(i=0; i<n; i++)
    {
        printf("%d ",*(p2+i));
    }


    return 0;
}
