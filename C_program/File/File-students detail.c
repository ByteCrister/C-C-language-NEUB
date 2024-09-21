#include<stdio.h>
int main()
{
     FILE *f;

     char ch[1000];
     int id,age,n,i;

     f=fopen("test7.txt","a");

     if(f==NULL)
     {
          printf("\nFile does not exist !");
     }

     else
     {
          printf("\nFile is opened...\n");

          printf("Enter number of students :");
          scanf("%d",&n);

          for(i=1;i<=n;i++)
          {
               printf("\n\nStudent Information[%d]\n\n",i);
               printf("Enter first name :");
               fflush(stdin);
               gets(ch);

               printf("Age :");
               scanf("%d",&age);

               printf("ID :");
               scanf("%d",&id);
          }

          fprintf(f,"\n%s\t\t%d\t\t%d",ch,id,age);

          printf("File is saved.");

          fclose(f);
     }

     getch();
}
