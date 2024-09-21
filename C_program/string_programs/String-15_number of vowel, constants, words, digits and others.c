#include<stdio.h>
int main()
{
    char s1[100],cv;

    int i,vowel,consonant,digit,word,other;

    printf("Enter a string value : ");
    gets(s1);

    i=vowel=consonant=digit=word=other=0;

    while((cv=s1[i])!='\0')
    {
        if(cv=='a'|| cv=='e'|| cv=='i'|| cv=='o'|| cv=='u'||
                cv=='A'|| cv=='E'|| cv=='I'|| cv=='O'|| cv=='U')
            vowel++;

        else if((cv>='a' && cv<='z') || (cv>='A' && cv<='Z'))
            consonant++;

        else if(cv==' ')
            word++;

        else if(cv>='0' && cv<='9')
            digit++;

        else
            other++;

        i++;

    }
    word++;
    printf("\n There are__ ");
    printf("\n %d Vowel",vowel);
    printf("\n %d Consonant",consonant);
    printf("\n %d Word",word);
    printf("\n %d Digit",digit);
    printf("\n %d Other",other);


    return 0;
}
