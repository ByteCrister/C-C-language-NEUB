
#include<stdio.h>
int maxarray(int a[])
{
    int i,max=a[0];
    for(i=1;i<=5;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}
int main()
{
    int n[20],x,i;
    printf("Enter six integer number: ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&n[i]);
    }
    x=maxarray(n);
    printf("maximum = %d\n",x);

    return 0;
}
