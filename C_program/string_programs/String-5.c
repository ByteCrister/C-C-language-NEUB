#include<stdio.h>
int main()
{
     char s1[100];//="String function";

     printf("Enter value for string length : ");
     gets(s1);
     int i=0,count=0;

     while(s1[i]!='\0')
     {
          i++;
          count++;
     }
     printf("\n Length = %d",count);


     return 0;
}
