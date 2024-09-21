#include<stdio.h>
int main()
{
     char s1[20],ch;
     printf("Enter the string : ");
     gets(s1);

     int i1=0,max=0,c=0;

     for(int i3=0; s1[i3]!='\0'; i3++)
     {
          if(s1[i3]>=65 && s1[i3]<=90)
               s1[i3]=s1[i3]+32;


     }
     while(s1[i1]!='\0')
     {
          for(int i2=0; s1[i2]!='\0'; i2++)
          {
               if(s1[i1]==s1[i2])
                    c++;
          }
          if(max<c){
               max=c;
               ch=s1[i1];
          }

          c=0;

          i1++;
     }

     printf("\nMaximum occurrence -> %c : %d",ch,max);

     return 0;
}
