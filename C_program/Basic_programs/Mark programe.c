#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark  :");
    scanf("%d",&mark);

    if (mark>=80 && mark<=100)
    {
        printf("A+");
    }

    else if (mark>=70)
    {
        printf("A");
    }

    else if (mark>=60)
    {
        printf("A-");
    }

    else if (mark>=50)
    {
        printf("B");
    }

        else if (mark>=40)
        {
            printf("C");
        }

        else if (mark>=0)
        {
            printf("F");
        }
        else
        {
            printf("Please enter your valid mark !!");
        }


        return 0;
    }
