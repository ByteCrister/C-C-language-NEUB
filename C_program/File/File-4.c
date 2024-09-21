#include<stdio.h>
int main()
{
    FILE *f;
    char D[1000];
    int age;
    f=fopen("test4.txt","a");

    if(f==NULL)
    {
        printf("File does not exist !");
    }

    else
    {
        printf("\nFile is opend.\n");

        printf("Enter your name :");
        gets(D);

        printf("\nEnter your age :");
        scanf("%d",&age);

        fprintf(f,"NAME :%s, Age :%d\n",D,age);

        printf("File saved.");
        fclose(f);
    }

    getch();
}
