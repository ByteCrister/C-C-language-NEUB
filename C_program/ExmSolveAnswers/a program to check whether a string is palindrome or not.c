#include<stdio.h>
int main()
{
    char str[50];
    int i=0,len,c=0,len1;

    printf("Enter a string :");
    gets(str);

    len=strlen(str);
    //printf("\n%d",len);
    len=len-1;
    len1=len;
    while(str[i]!='\0')
    {
        if(str[i]==str[len])
        {
            c++;
        }
        len--;
        i++;
    }
    if(len1==c-1)
        printf("\nThe string is a palindrome");
    else
        printf("\nThe string is not a palindrome");


    return 0;
}
