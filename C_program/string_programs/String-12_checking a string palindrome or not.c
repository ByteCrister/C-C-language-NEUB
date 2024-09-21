#include<stdio.h>
int main()
{
    char s1[100],s2[100];

    printf("Enter string value : ");
    gets(s1);

    int i=0;
    while(s1[i]!='\0')
    {
        i++;
    }

    i-=1;

    int j=0;

    while(i>=0)
    {
        s2[j]=s1[i];
        j++;
        i--;
    }

    int com=strcmp(s1,s2);
    if(com==0)
    {
        printf("\n The string is palindrome");
    }

    else
        printf("\n Not palindrome");


    getch();

}
