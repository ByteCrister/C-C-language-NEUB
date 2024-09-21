#include<stdio.h>
void bin_();
int main()
{
    int n;
    printf("Enter the decimal number : ");
    scanf("%d",&n);  // n=110

    printf("Binary ->");

    bin_(n);

    return 0;
}

void bin_(int a)
{
    int i=0,rem,num,ar[100],j;
    while(a>=1)
    {
        num=a/2;
        if(num!=1)
        {
            rem=a%2;
        }

        else
        {
            a=num;
            rem=a;
        }
        a=num;
        ar[i]=rem;

        ++i;
    }

    for(j=i; j>=0; j--)
    {
        printf(" %d",ar[i]);
    }

}
