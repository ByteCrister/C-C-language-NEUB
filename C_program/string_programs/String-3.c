#include<stdio.h>
int main()
{
     char s1[]="String"; int i=0;


    /* for(int i=0;i<7;i++)
     {
          printf("\n%c",s1[i]);
     }
     */

     printf("%s\n",s1);
     while(s1[i]!='\0')
     {
          printf(" %c\n",s1[i]);
          i++;
     }



     return 0;
}
