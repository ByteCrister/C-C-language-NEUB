
#include <stdio.h>

void input_arr(int a[], int n){
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    return;
}

void concat_arr(int a1[], int n1, int a2[], int n2){
    for(int i=0; i<n2; i++)
        a1[n1+i] = a2[i];

    return;
}

void arr_print(int a[], int n){
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);

    return;
}

int main(){
    int i, n1, n2, arr1[20], arr2[20];

    printf("Enter number of values in first array: ");
    scanf("%d", &n1);
    printf("Enter %d values of first array: ", n1);
    input_arr(arr1, n1);

    printf("\nEnter number of values in second array: ");
    scanf("%d", &n2);
    printf("Enter %d values of second array: ", n2);
    input_arr(arr2, n2);

    concat_arr(arr1, n1, arr2, n2);

    arr_print(arr1, n1+n2);

    return 0;
}
