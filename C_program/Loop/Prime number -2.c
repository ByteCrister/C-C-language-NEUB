#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter N :");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("\nPrime");
    }
    else

     printf("\nNot prinme");

}
