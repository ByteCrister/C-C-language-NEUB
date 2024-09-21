
#include<stdio.h>
int main()
{
     char s1[100];

     printf("Enter string value : ");
     //scanf("%s",&s1);

      gets(s1);                                       //scanf function did'nt work after any space

     printf("\n Output value : %s",s1);


     return 0;
}
