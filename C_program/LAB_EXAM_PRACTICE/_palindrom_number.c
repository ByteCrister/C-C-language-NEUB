#include<stdio.h>
int main()
{
     int n1=121,n2,sum=0;
     n2=n1;
     while(n1!=0){
          sum=sum*10 + n1%10;
          n1=n1/10;
     }
     if(sum==n2)
          printf("\nNumber is Palindrome");
     else
          printf("\nNumber is not palindrome");

     return 0;
}
