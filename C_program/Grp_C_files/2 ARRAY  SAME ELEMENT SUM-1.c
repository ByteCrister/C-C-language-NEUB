
#include<stdio.h>
int main(){
    int arr1[20],arr2[20],i,arr;
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
     for(i=0; i<=4;i++)
     {
        arr=arr1[i]+arr2[i];
        printf("\n%d",arr);
     }


return 0;
}
