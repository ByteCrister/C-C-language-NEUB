#include<stdio.h>
void DtoBin(int n)
{
    int i=0,rem,ar[40],a,j;
    a=n;

    while(n!=0)
    {
        rem=n%2;
        ar[i]=rem;
        n=n/2;

        i++;
    }
    printf("\nBinary of %d ->",a);

    for(j=i-1; j>=0; j--)
    {
        printf("%d ",ar[j]);
    }

}

int main()
{
    int n;
    printf("Enter the decimal number : ");
    scanf("%d",&n);

    DtoBin(n);

    getch();
}
