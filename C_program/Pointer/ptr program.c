#include <stdio.h>
int main()
{
    int x[5] = {11, 22, 33, 44, 55};
    int* ptr;

    ptr = &x[1];

    *ptr += 10;

    *(ptr+1) += 10;

    printf("%d \n", *ptr);

    printf("%d \n", *(ptr+1));

    printf("%d", *(ptr-1));
    return 0;
}
