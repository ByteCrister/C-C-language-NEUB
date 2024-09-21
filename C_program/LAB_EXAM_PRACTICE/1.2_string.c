#include<stdio.h>
int main()
{
     char s1[20],s2[20],s3[20];
     printf("\nEnter first string : ");
     gets(s1);

     printf("\nEnter second string : ");
     gets(s2);

     strcat(s1,s2);
     printf("\nstring add with strcat : %s",s1);

     printf("\nEnter other string : ");
     gets(s3);

     int i1=0,i2=0;
     while(s3[i1]!='\0')
     {
          i1++;
     }
     i1++;
     while(s3[i2]!='\0')
     {
          s2[i2+i1]=s3[i2];
          i2++;
     }

     printf("\nString add without strcat : %s",s2);

     return 0;
}
