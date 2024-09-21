#include<stdio.h>
int main(){

     int b=10,p=2,i=1,product=1;
     while(i<=p){
          product*=b;
          i++;
     }
     printf("\nPower-> %d",product);
     return 0;
}
