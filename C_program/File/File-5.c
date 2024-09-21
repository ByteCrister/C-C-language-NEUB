#include<stdio.h>
int main()
{
     FILE *f;
     char ch;
     f=fopen("test.txt","r");

     if(f==NULL)
     {
          printf("\nFile does not exist !");
     }

     else
     {
          printf("\nFile is opend .\n");
          while(!feof(f))
          {
               ch=fgetc(f);
               printf("%c",ch);
          }
          fclose(f);
     }

     getch();
}
