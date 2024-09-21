
#include<stdio.h>
int main()
{
    int n,a,i=0,j,arr[20];
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d number binary is:",n);
    if(n==0)
    {
        printf("0");
    }
    else
    {
      while(n!=0)
    {
       a=n%2;
       arr[i]=a;
       n=n/2;
              i++;
    }
    for(j=(i-1);j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    }

return 0;
}
