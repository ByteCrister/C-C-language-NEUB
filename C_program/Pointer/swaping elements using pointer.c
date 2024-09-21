#include<stdio.h>
void func();
int main()
{
    int a,b;
    printf("Enter two integer number :");
    scanf("%d%d",&a,&b);

    func(&a,&b);

    printf("A = %d\n",a);
    printf("B = %d\n",b);

    return 0;
}

void func(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
