#include<stdio.h>
int main()
{
    char st[30],ch;
    int max=0,i,j,c=0,len;

    printf("Enter the string : ");
    gets(st);

    len=strlen(st);
    for(i=0; i<len; i++)
    {
        for(j=0; j<len; j++)
        {
            if(st[i]==st[j])
            {
                c++;
            }
        }
        if(max<c)
        {
            max=c;
            ch=st[i];
        }
        c=0;
    }

    printf("\nMaximum occurring character : '%c'",ch);
    printf("\nOccurrence : %d",max);

    getch();
}
