
#include<stdio.h>
int main()
{
    int i,x=0,arr[]={1,2,3,4,5,6,7,8,9,10};
    {
         for(i=0;i<=9;i++)
            {

            if(arr[i]%2==0)
                x+=arr[i];
            printf("%d ",x);
            }
    }
return 0;
}
