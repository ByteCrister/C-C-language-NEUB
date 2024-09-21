#include <stdio.h>
int main()
{
    int i = 1;

    while(i <= 10)
    {
        if(i%5 == 0)
            break;
        printf("%d", i++);
    }

    printf("The End");
    return 0;
}
