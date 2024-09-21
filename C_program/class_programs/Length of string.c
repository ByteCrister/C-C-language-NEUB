#include<stdio.h>
int main()
{
     char nm[100];
     printf("Enter your name :");
     gets(nm);

     //int len=strlen(nm);
     int i=len(nm);

     printf("\nLength -> %d",i);

     getch();
}

int len(char len[])
{
     int i=0;

     while(len[i]!='\0')
     {
          i++;
     }

     return i;
}
