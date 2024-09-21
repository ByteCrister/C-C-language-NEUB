#include<stdio.h>
int main()
{
     char st[30],c;
     int max=0,i=0;
     printf("Enter the string :");

     gets(st);

     printf("\nEnter the character to find frequency :");
     scanf("%c",&c);
     if(c<=95)
     {
          c+=32;
     }

     while(st[i]!='\0')
     {
          if(st[i]<=95)
          {
               st[i]+=32;
          }
          if(st[i]==c)
               {
                  max+=1;
               }

          i++;
     }
     printf("\nFrequency of %c is: %d",c,max);


     return 0;
}
