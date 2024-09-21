#include<stdio.h>
int main()
{
     int i=0,j=0;
     char in[25],ch;

     printf("Enter the string : ");
     gets(in);

     printf("\nEnter the character to find frequency : ");
     scanf("%c",&ch);

     while(in[i]!='\0')
     {
          if(in[i]==ch)
          {
               j++;
          }

          i++;
     }

     printf("\nFrequency of %c is : %d",ch,j);

     return 0;
}
