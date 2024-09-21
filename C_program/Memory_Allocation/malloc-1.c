#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr,n;
     printf("Enter number of student :");
     scanf("%d",&n);

     ptr=(int*)malloc(n*sizeof(int));
     //ptr=(int*)calloc(n,sizeof(int));

     if(ptr==NULL)
     {
          printf("\nMemory does not allocated !");
     }

     else
     {
          printf("\nMemory allocation successful ...");
          //Do your work
          free(ptr);
          printf("\nMemory freed successfully.....");

          // ptr =realloc(ptr,10);
     }

     getch();
}
