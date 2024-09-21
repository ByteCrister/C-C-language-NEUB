#include<stdio.h>
int main()
{
    int a;
    for(a=1; a<=15; a++)

    {
        if(a%2==1)

          continue;
        printf("%d\n",a);

        if(a%2==0)
                break;

    }

       return 0;
}
