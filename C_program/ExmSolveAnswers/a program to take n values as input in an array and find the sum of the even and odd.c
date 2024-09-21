#include<stdio.h>
int main()
{
    int ar[25],i=0,n,Osum=0,Esum=0;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    while(i<n)
    {
        printf("\nArray[%d]->",i);
        scanf("%d",&ar[i]);

        i++;
    }

    i=0;
    while(i<n)
    {
        if(ar[i]%2==0)
        {
            Esum+=ar[i];
        }
        else
            Osum+=ar[i];

        i++;
    }

    printf("\nSum of even's : %d",Esum);
    printf("\nSum of odd's : %d",Osum);
    return 0;
}
