#include<stdio.h>
int main()
{
    int x=5,i;
    printf("Enter a intejer number :");
    scanf("%d",&i);
    if (i%5==0)
        x*=10;  //50
    else if
        (i%2!=0)
        x-=10; //40
    else
        x++; //6
    printf("result=%d\n",x);
//    return 0;
}
