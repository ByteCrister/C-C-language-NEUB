#include<stdio.h>
int main()
{
    char s1[20];
    printf("Enter the string : ");
    scanf("%[^\n]",s1);
    int i4=0;
    while(s1[i4]!='\0')
    {
        if(s1[i4]>=65 && s1[i4]<=90)
        {
            s1[i4]=s1[i4]+32;
        }
        i4++;
    }

    int len=0,i3=0;
    while(s1[i3]!='\0')
    {
        len++;
        i3++;
    }

    for(int i1=0; i1<=len-2; i1++)
    {
        for(int i2=i1+1; i2<len; i2++){
          if(s1[i1]>s1[i2]){
               char tem=s1[i1];
               s1[i1]=s1[i2];
               s1[i2]=tem;
          }
        }
    }

    printf("\nSorted string : %s",s1);

    return 0;
}
