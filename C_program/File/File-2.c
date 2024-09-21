#include<stdio.h>
int main()
{
    FILE *f;

    char txt[1000];
    printf("Start your writing....");
    gets(txt);
    int L=strlen(txt),i;
    f=fopen("test2.txt","w");

    if(f==NULL)
    {
        printf("File does not exist !");
    }
    else
    {
        printf("\nFile is opend\n");
        for(i=0; i<L; i++)
        {
            fputc(txt[i],f);
        }
        fclose(f);
    }


    return 0;
}
