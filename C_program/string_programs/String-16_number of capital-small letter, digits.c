#include<stdio.h>
int main()
{
    char s1[100],c;
    printf("Enter a string : ");
    gets(s1);

    int i,cp,sm,dg,wrd,other;

    i=cp=sm=dg=wrd=other=0;

    while((c=s1[i])!='\0')
    {
        if(c>=65 && c<=90)
            cp++;

        else if(c>=97 && c<=122)
            sm++;

        else if(c>='0' && c<='9' )
            dg++;
        else if(c==' ')
            wrd++;
            else
               other++;

        i++;
    }

    printf("\n Capital letter = %d",cp);
    printf("\n Small letter = %d",sm);
    printf("\nWords = %d",wrd+1);
    printf("\n Digit = %d",dg);
    printf("\n Other characters = %d",other);



    return 0;
}
