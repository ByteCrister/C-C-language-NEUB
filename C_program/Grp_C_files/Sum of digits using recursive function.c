
#include<stdio.h>
int recersivesum(int x)
{
    int s=0,a;
    if(x==1)
        return 1;
    else if(x==0)
        return 0;
    else
        while(x!=0)
        {
            a=x%10;
            s=s+a;
            x=x/10;
        }
    return s;
}
int main()
{
    while(1)
    {
        int n,a;

        printf("Enter a integer number: ");
        scanf("%d",&n);

        a=recersivesum(n);

        printf("Sum= %d\n",a);
    }

    return 0;
}
