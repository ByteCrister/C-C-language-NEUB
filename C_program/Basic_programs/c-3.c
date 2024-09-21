#include<stdio.h>
int main(){

     int n=100;
     int ar[5],i=0;

     while(n!=0){
          ar[i]=n%10;
          n=n/10;
          i++;
     }

     for(int j=i-1; j>=0; j--){
          printf("%d ",ar[j]);
     }
     return 0;
}