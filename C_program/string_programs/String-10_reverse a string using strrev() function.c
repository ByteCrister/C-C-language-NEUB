#include<stdio.h>
int main()
{
     char s1[100];
     printf("Enter a string value : ");
     gets(s1);

     strrev(s1);

     printf("\nstring :%s",s1);


     getch();
}
