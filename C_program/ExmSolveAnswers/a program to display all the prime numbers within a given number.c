#include<stdio.h>
int main()
{
    int n,i,j,c=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("\nPrimes : ");
    for(i=2; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
            printf("%d ",i);
        c=0;
    }

    return 0;
}
