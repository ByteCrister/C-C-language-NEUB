#include<stdio.h>
int main()
{
    int ar[50],i=0,n,rem,div;
    printf("Enter the decimal number :");
    scanf("%d",&n);

    while(n>0)
    {
            rem=n%2;
            div=n/2;
            ar[i]=rem;
            n=div;

            i++;

    }
    printf("Binary ->");

    while(i>=0)
    {
        printf("%d ",ar[i]);
        i--;
    }


    return 0;
}
