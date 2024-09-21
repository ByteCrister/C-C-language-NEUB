#include<stdio.h>
int main()
{
     char s1[100],s2[100];
     printf("Enter a string value : ");
     gets(s1);

     strupr(s1);
     printf("\n Upper case of the string = %s",s1);

     strlwr(s1);
     printf("\n Lower case of the string = %s",s1);


     getch();
}
