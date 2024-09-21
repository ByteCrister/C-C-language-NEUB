#include<stdio.h>
int main()
{
     char s1[20],s2[20];
     int i1=0,i2=0,c=0;

     printf("Enter first string : ");
     gets(s1);
     printf("\nEnter second string : ");
     gets(s2);

     while(s1[i1]!='\0')
     {
          i1++;
     }

     while(s1[i2]!='\0')
     {
          for(int i3=0; s2[i3]!='\0'; i3++){
               if(s1[i2]==s2[i3])
                    c++;
          }
          i2++;
     }

     if(c==i1)
          printf("\nString is anagram");
     else
          printf("\nString is not anagram");

     return 0;
}
