#include<stdio.h>
int main()
{
    int a,b,i,j,n=0;
    printf("Enter two inputs : ");
    scanf("%d%d",&a,&b);

    printf("\n Prime numbers from %d-%d : ",a,b);
    for(i=a; i<=b; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                n+=1;
                break;
            }
        }
        if(n==0)
        {
            printf("%d ",i);
        }
        n=0;
    }
    return 0;
}
