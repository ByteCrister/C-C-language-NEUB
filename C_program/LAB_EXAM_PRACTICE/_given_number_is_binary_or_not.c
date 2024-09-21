#include<stdio.h>
int main()
{
     int bin=1011,c=0,rem;
     while(bin!=0){
          rem=bin%10;
          if(rem!=0 && rem!=1){
               c++;
               break;
          }
          bin=bin/10;
     }
     if(c==0){
          printf("\nGiven number is a binary number");
     }
     else{
          printf("\nGiven number is not a binary");
     }

     return 0;
}
