#include<stdio.h>
int main()
{
     FILE *f;
     char ch[1000];
     f=fopen("test3.txt","r");

     if(f==NULL)
     {
          printf("File does not exist !");
     }
     else
     {
          printf("\nFile is opened..\n");

          fscanf(f,"%s",&ch);
          printf("%s\n",ch);

          fclose(f);
     }


     getch();
}
