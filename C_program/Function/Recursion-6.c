#include<stdio.h>
void f( );
int main()
{
     f(3);
     getch();
}

void f(int x)
{
     if(x==0)
          return 0;
     --x;
     printf("%d\n",x);
     f(x);
     printf("%d\n",x);
}
