//2 array sum
#include<stdio.h>
void arr_sum(int a1[],int a2[])
{
    for(int i=0;i<=4;i++)
   {
    int arr=a1[i]+a2[i];

   printf("sum of array [%d]:%d\n",i,arr);
   }


}

int main(){
    int arr1[20],arr2[20],i;
    printf("Enter the value of arr1: ");
    printf("\n");
    for(i=0; i<=4;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the value of arr2: ");
       printf("\n");

     for(i=0; i<=4;i++)
     {
        scanf("%d",&arr2[i]);
     }
arr_sum(arr1,arr2);
return ;
}
