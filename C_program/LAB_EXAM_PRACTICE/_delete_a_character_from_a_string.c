#include<stdio.h>
int main()
{
     char s[20],ch;
     int i1=0,i2=0;

     printf("Enter the string : ");
     gets(s);

     while(s[i1]!='\0')
     {
          i1++;
     }
     printf("\nEnter the character you want to delete : ");
     scanf("%c",&ch);

     while(s[i2]!='\0')
     {
          if(s[i2]==ch)
               break;
          i2++;
     }

     for(int i3=i2; i3<=i1-i2; i3++)
     {
          s[i3]=s[i3+1];
     }
     s[i1-1]='\0';

     printf("\nDelete %c -> ",ch);
     puts(s);

     return 0;
}
