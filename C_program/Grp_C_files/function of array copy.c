
#include<stdio.h>
int main()
{
    int n, arr1[20],arr2[20];
    printf("Enter number of value: ");
     scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr1[i]);
    }
    arr_copy(arr1,arr2,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;

}
void arr_copy(int a1[],int a2[],int n)
{
    for(int i=0;i<n;i++)
   {
       a2[i]=a1[i];
   }


}
