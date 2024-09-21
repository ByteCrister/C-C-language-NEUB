#include<stdio.h>
int main()
{
     FILE *f;
     char name[1000];

     f=fopen("test3.txt","w");

     if(f==NULL)
     {
          printf("File does not opened");
     }

     else
     {
          printf("\nFile is opened\n");
          printf("\nStart writing....");
          gets(name);
          fputs(name,f);

          printf("\nSuccessfully saved.");
          fclose(f);
     }



     getch();
}
