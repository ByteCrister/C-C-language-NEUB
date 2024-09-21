#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value : ");
    scanf("%d",&a);

    {

        for(b=1; b<=a; b++)

        {
            printf("# ");
        }


    }
    {
        for(b=1; b<a; b++)

        {
            printf("\n#");
        }


    }
    return 0;

}
