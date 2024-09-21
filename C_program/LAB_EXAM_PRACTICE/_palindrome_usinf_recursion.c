#include<stdio.h>
int palindrome(int value)
{
     static int sum=0;
     if(value!=0){
          sum=sum*10 + value%10;
          palindrome(value/10);
     }
     else
          return sum;
}
int main()
{
     int n=121;
     if(palindrome(n)==n){
          printf("\nNumber is palindrome");
     }
     else
          printf("\nNumber is not palindrome");

     return 0;
}
