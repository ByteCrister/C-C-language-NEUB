#include<stdio.h>
int size;

void insertion_sort(int a[]){
    int j,i;
    for(i=1; i<=size-1; i++){
        for(j=i; j>=0; j--){
            if(a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

int main(){
    printf("Enter size :");
    scanf("%d",&size);
    int a[size];

    printf("\nEnter integer numbers\n");
    for(int i=0; i<size; i++){
        printf("Array[%d]-> ",i);
        scanf("%d",&a[i]);
    }

    insertion_sort(a);

    printf("\nUnsorted array-> ");
    for(int i=0; i<size; i++){
        printf("%d ",a[i]);
    }
}