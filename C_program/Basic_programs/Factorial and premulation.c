#include<stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return fact(n-1)*n;
}

int main()
{
    int n,r,nPr,nCr;
    printf("Enter n :");
    scanf("%d",&n);

    printf("Enter r :");
    scanf("%d",&r);

    nCr=fact(n)/(fact (r)*fact (n-r));

    nPr=fact(n)/fact (n-r);

    printf("\nValue of combinations[ n!/r!(n-r)! ] : %d",nCr);
    printf("\nValue of permutations[ n!/(n-r)! ] : %d",nPr);

    return 0;
}
