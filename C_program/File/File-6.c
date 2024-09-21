#include<stdio.h>
int main()
{
     FILE *f;
     char ch[1000];
     int i=0;
     f=fopen("test3.txt","r");

     if(f==NULL)
     {
          printf("\nFile does not exist !");
     }

     else
     {
          printf("\nFile is opened .\n");
           while(ch[i]!='\0')                                  //while(!feof(f))
          {

          fgets(ch,10000,f);
          printf("%s\n",ch);
          i++;

          }
          fclose(f);
     }


     getch();
}
