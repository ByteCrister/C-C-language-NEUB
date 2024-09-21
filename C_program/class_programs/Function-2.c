#include<stdio.h>
int main()
{
    int x=100,y=20;
    char str[10]= {'a','b','c','d'};

    for(int i=0; i<4; i++)
    {
        y=test_function1(x,str);

        printf("x=%d , y=%d\n",x,y);

    }
    printf("%s",str);


    return 0;
}

int test_function1(int m,char w[])

{
    int x=2*m;
    test_function2(m);
    w[0]=w[0]+1;
    return x;
}

void test_function2(n)
{
    int y=n+10;
    return ;
}
