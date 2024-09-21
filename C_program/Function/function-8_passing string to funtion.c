#include<stdio.h>

void srt(char s[])
{
    int i=0;

     while(s[i]!='\0')
     {
          printf("%c",s[i]);
          i++;
     }
}

int main()
{
     char st[100];
     printf("Enter your name :");
     gets(st);

     srt(st);

     getch();
}
