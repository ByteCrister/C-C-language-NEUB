#include<stdio.h>
void func();
int main()
{
    int a,b,c,l,s;

    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);

    fun(a,b,c,&l,&s);

    printf("\nLarge number : %d",l);
    printf("\nSmall number : %d",s);

    return 0;
}

void fun(int x,int y,int z,int *pl,int *ps)
{

    if(x>y && x>z)
        *pl=x;
    else if(y>x && y>z)
        *pl=y;
    else
        *pl=z;

    if(x<y && x<z)
        *ps=x;
    else if(y<x && y<z)
        *ps=y;
    else
        *ps=z;

}
