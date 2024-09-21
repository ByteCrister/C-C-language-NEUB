#include<stdio.h>
#include<string.h>
int main(){

    char st[60],str1[60],str2[60],ch;
    int i=0;
    printf("Enter the string : ");
    gets(st);

    strcpy(str1,st);
    printf("\nString copy by strcpy : %s",str1);

    while(st[i]!='\0'){
        str2[i]=st[i];
        i++;
    }
    printf("\nString copy without using strcpy : %s",str1);

    char st1[60],st2[60],st3[60];
    printf("\nEnter first string : ");
    gets(st1);
    printf("\nEnter second string : ");
    gets(st2);
    strcat(st1,st2);
    printf("\nSring add with strcat : %s",st1);

    printf("\nEnter another string : ");
    gets(st3);

    int k=0;
    while(st3[k]!='\0'){
        k++;
    }
    printf("\nString length of st3 : %d",strlen(st3));
    printf("\nString length of st3 : %d",k);
    k++;
    int j=0;
    while(st3[j]!='\0'){
        st2[k+j]=st3[j];
        j++;
    }
    printf("\nString add without using strcat : %s",st2);

    char st4[20],st5[20];
    printf("\nEnter first string : ");
    gets(st4);

    printf("\nEnter second string : ");
    gets(st5);

    int com=strcmp(st4,st5);
    if(com==0)
    printf("\nPalindrome.");

    else
    printf("\nNot equal.");

    int i1=0,i2=0;
    while(st4!='\0'){
        i1++;
    }
    while(st5!='\0'){
        i2++;
    }

    if(i1==i2)
    printf("\nPalindrome");

    else
    printf("\nNot palindrome");

    printf("\nString reverse of st4  : %s",strrev(st4));

    printf("\n string reverse without using strrev : ");
    while(i1>=0){
        printf("%c",st4[i1]);
        i1--;
    }



    return 0;
}
