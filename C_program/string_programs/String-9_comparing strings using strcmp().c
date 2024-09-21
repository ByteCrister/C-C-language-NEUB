#include<stdio.h>
int main()
{
     char s1[100],s2[100];

     printf("Enter string value1 : ");
     gets(s1);

     printf("\nEnter string value2 : ");
     gets(s2);

    int cpm=strcmp(s1,s2);

     if(cpm==0)
          printf("\nStrings are equal");
     else
          printf("\nStrings are not equal");


     return 0;
}
