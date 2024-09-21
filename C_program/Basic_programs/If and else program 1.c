#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two intejer number:");
    scanf("%d %d",&a,&b);
    if(a>b)

        printf("Large number is:%d",a);

   else if(a<b)

        printf("Largre number is:%d",b);

        else
            printf("The numbers are equal");

        getch();


}
