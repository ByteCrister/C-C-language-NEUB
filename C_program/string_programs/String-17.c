#include<stdio.h>
int main()
{
     char st[50];
     printf("Enter country name :");
     gets(st);

     printf("%s",strlwr(st));


     return 0;
}
