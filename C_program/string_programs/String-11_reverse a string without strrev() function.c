#include<stdio.h>
int main()
{
     char s1[100],s2[100];
     printf("Enter a string value : ");
     gets(s1);

     int i=0,len=0,j=0;
     len=strlen(s1);
     /*while(s1[i]!='\0')
     {
          i++;
          len++;
     }
     int j=0;
     //i=len-1;
     i=i-1;*/
     i=len-1;
     while(i>=0)
     {
          s2[j]=s1[i];
          j++;
          i--;
     }
     printf("\n Reverse string is : %s",s2);

     getch();
}
