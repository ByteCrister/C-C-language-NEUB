#include<stdio.h>
int main()
{
     char s1[100],s2[100],temp[100];
     printf("Enter string value 1 : ");
     gets(s1);
     printf("Enter string value 2 : ");
     gets(s2);

     strcpy(temp,s1);
     strcpy(s1,s2);
     strcpy(s2,temp);

     printf("\n String 1 = %s",s1);
     printf("\n String 2 = %s",s2);


     getch();
}
