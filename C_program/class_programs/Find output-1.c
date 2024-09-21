#include <stdio.h>

int main()
{
    int i=10, x=0;
    while(i >= 0)
    {
        if(i%2 == 0)

        x += i;
        printf("%d ", x);


        i--;
    }

    printf("\ni= %d, x= %d", i,x);

    return 0;
}
