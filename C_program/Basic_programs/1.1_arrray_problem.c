#include<stdio.h>
int main(){

    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];

    for(int j=0; j<n; j++){
        printf("Array[%d]->",j);
        scanf("%d",&a[j]);
    }
    printf("\nArray-> ");
    for(int j=0; j<n; j++){
        printf("%d ",a[j]);
    }

    int a1[n];
    printf("\nEnter the number's again\n");
    for(int j=0; j<n; j++){
        printf("Array[%d]->",j);
        scanf("%d",&a1[j]);
    }

    int num=0,count=0,c=0;
    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(a[j]==a1[k]){
                count++;
                break;
            }
        }
        if(count==0){
            num=a[j];
            c++;
            break;
        }
        count=0;
        
    }

    if(c!=0){
        printf("\nThe missing number : %d",num);
    }
    else{
        printf("\nAll ok");
    }

    return 0;
}