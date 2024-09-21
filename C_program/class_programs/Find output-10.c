#include<stdio.h>
int main()
{
    int* ptr, x, y;
    x = 5;
    y = -15;

    ptr = &x;
    printf("%d", *ptr);

    *ptr = 100;
    ptr = &y;
    printf("x=%d, y=%d", x,y);

                      return 0;
}
