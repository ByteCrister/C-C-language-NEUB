#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter value for string 1 :");
    gets(s1);

    printf("\nEnter value for string 2 :");
    gets(s2);

    int i=0;

    while(s1[i]!='\0')
    {
        i++;
    }

    int j=0;
    while(s2[j]!='\0')
    {
        s1[i+j]=s2[j];

        j++;
    }
    s1[i+j]='\0';
    printf("\n String value : %s",s1);

    return 0;
}
