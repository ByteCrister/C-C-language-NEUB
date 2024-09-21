#include<stdio.h>
int main()
{
    int i,n;

    float ar[20],sml,lrg;

    printf("Enter number of elements :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Array[%d]->",i);
        scanf("%f",&ar[i]);
    }

    lrg=ar[0];
    sml=ar[0];

    for(i=1; i<n; i++)
    {
        if(lrg<ar[i])
        {
            lrg=ar[i];
        }
        if(sml>ar[i])
        {
            sml=ar[i];
        }
    }

    printf("\nLargest number : %.2f",lrg);
    printf("\nSmallest number : %.2f",sml);

    return 0;
}
