#include<stdio.h>
#include<string.h>
int main()
{
     char st[100],ch;
     int i,j=1;

     printf("Enter any name : ");
     gets(st);

     printf("\nEnter the character you want to remove : ");
     scanf("%c",&ch);

     int len=strlen(st);
     for(i=0; i<len; i++)
     {
          if(st[i]!=ch)
          {
               st[j]=st[i];
          }
          j++;
     }
     st[j]='\0';

     printf("\nAfter removing : ");
     puts(st);

     return 0;
}
