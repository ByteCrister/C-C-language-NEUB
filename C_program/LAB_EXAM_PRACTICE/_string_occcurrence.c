#include<stdio.h>
int main()
{
     char s[50],ch;
     int i1=0,i2=0,rep=0;

     printf("Enter the string : ");
     gets(s);

     while(s[i1]!='\0')
     {
          if(s[i1]>=65 && s[i1]<=90)
               s[i1]+=32;

          i1++;
     }
     printf("\nEnter the character : ");
     scanf("%c",&ch);
     char c=ch;
     if(ch>=65 && ch<=90)
          ch=ch+32;

     while(s[i2]!='\0')
     {
          if(s[i2]==ch)
               rep++;
          i2++;
     }
     printf("\nOccurrence of %c : %d",c,rep);

     return 0;
}
