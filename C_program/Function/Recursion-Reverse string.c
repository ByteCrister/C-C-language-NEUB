#include<stdio.h>
void name(int a ,char s[]);
int main()
{
     char str[100];
     printf("Enter name :");
     gets(str);

     printf("%s\n",str);

     int length=strlen(str);

     printf("Reverse of '%s' -> ",str);

     name(length,str);

     getch();
}

void name(int a,char s[])
{
     if(a>=0)
     {
          printf("%c",s[a]);
          --a;
          name(a,s);
     }
}
