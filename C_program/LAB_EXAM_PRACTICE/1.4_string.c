#include<stdio.h>
int main()
{
    char s1[50];

    int vowel,consonant,words,digits,spaces,others,cap,small;

    vowel=consonant=words=digits=spaces=others=cap=small=0;

    printf("\nEnter the sting : ");
    gets(s1);

    int i=0;
    while(s1[i]!='\0')
    {
        if((s1[i]>=65)&&(s1[i]<=91))
            cap++;

        if((s1[i]>=96)&&(s1[i]<=122))
            small++;

        if((s1[i]>=65)&&(s1[i]<=91) || (s1[i]>=96)&&(s1[i]<=122))
            words++;

        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' ||
                s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
        {
            vowel++;
        }

        else if(s1[i]>='a' && s1[i]<='z' || s1[i]>='A' && s1[i]<='Z')
        {
            consonant++;
        }

        else if(s1[i]=='1'||s1[i]=='2'||s1[i]=='3'||s1[i]=='4'||s1[i]=='5'||s1[i]=='6'||s1[i]=='7'||s1[i]=='8'||s1[i]=='9'||s1[i]=='0')
        {
            digits++;
        }

        else if(s1[i]==' ')
            spaces++;

        else
            others++;

        i++;
    }

    printf("\n\nThe string is ->> %s",s1);

    printf("\nWords : %d",words);
    printf("\nVowels : %d",vowel);
    printf("\nConsonant : %d",consonant);
    printf("\nDigits : %d",digits);
    printf("\nSpaces : %d",spaces);
    printf("\nCapital letters : %d",cap);
    printf("\nSmall letetrs : %d",small);
    printf("\nOthers : %d",others);


    return 0;
}
