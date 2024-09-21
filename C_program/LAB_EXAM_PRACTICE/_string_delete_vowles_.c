#include<stdio.h>
int main()
{
     char s1[20];
     int i1=0,i2=0;

     printf("Enter the string : ");
     gets(s1);

     while(s1[i1]!='\0')
     {
          i1++;
     }

     while(i2<i1){
          if(s1[i2]=='a' || s1[i2]=='e' || s1[i2]=='i' || s1[i2]=='o' || s1[i2]=='u' || s1[i2]=='A' || s1[i2]=='E' || s1[i2]=='I' || s1[i2]=='O' || s1[i2]=='U' ){
               for(int i3=i2; i3<i1; i3++){
                   s1[i3]=s1[i3+1];
               }
               i1-=1;
             }
             else
             i2++;
     }

     printf("\nAfter removing the vowels : %s",s1);

     return 0;
}
