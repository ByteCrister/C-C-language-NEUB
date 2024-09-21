
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three intejer  number =");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is larger than %d %d",a,b,c);

        else if (b>a && b>c)
             printf("%d is larger than %d %d",b,a,c);

        else if (c>a && c>b)
             printf("%d is larger than %d %d",c,a,b);
    else
             printf("The numbers are equal");
    return 0;
}
