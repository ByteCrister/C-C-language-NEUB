#include<stdio.h>
int main()
{
     char s1[20];
     int i1=0;
     printf("\nEnter the string : ");
     gets(s1);

     printf("\nString reverse using strcat : %s",strrev(s1));

     printf("\nString reverse without using strrev : ");
     while(s1[i1]!='\0')
     {
          i1++;
     }
     i1++;
     while(i1>=0)
     {
          printf("%c",s1[i1]);
          i1--;
     }

     return 0;
}
