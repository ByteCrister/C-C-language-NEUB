#include<stdio.h>
int main()
{
     char s1[7];
     char s2[]={'S','t','r','i','n','g','\0'};
     char s3[]="Function name string";
     char s4[]="Function name\
                              string";

     char s5[50];
     printf("Enter your name :");
     gets(s5);


     s1[0]='S';
     s1[1]='t';
     s1[2]='r';
     s1[3]='i';
     s1[4]='n';
     s1[5]='g';
     s1[6]='\0';

     printf("\n Function name -> %s",s1);
     printf("\n Function name -> %s",s2);
     printf("\n Function name -> %s",s3);
     printf("\n Function name -> %s",s4);
     printf("\n Function name -> %s",s5);



     return 0;
}
