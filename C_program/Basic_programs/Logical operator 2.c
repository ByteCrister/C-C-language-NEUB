//Vowel to consonant convertion
#include <stdio.h>

int main()
{
    char ch;
    printf("enter a letter  :");
    scanf("%c",&ch);
    if (ch=='i'|| ch=='a'|| ch=='e'||ch=='o'||ch=='u')
    printf("Vowel");   //This program is for logical "or"

    else
    printf("consonant");
    return 0;
}

