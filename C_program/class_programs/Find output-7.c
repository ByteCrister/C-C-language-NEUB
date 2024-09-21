#include <stdio.h>
int main ()
{
    int i=0, x=0;
    for(i=1; i<8; i++)
    {
        if(i%2==1)
        {
            x+=i;
            continue;
        }
        else
            x--;
        printf("%d ",x);
    }
    printf("\nx=%d",x);
    return 0;
}
