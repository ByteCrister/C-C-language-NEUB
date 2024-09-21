#include<stdio.h>
int main()
{
    char s1[100],s2[100];

    printf("Enter the string value :");

    gets(s1);

    strcpy(s2,s1);

    printf("\n First string =%s",s1);
    printf("\n Second string =%s",s2);


    return 0;
}
