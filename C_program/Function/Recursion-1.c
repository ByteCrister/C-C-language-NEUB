//RECURSIVE CALL
//BASE CASE

#include<stdio.h>
int main()
{
    int n;
    printf("Enter base number for factorial :");
    scanf("%d",&n);

    fact(n);

    printf("\n%d! ->%d",n,fact(n));

    getch();
}

int fact(int a)
{
    if(a!=1)
    return a*fact(a-1);

     else
    return 1;

}
