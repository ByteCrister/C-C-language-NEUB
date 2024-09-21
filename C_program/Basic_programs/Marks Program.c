#include <stdio.h>
int main()
{ while(1)

 {


    float marks;
    printf("enter your marks:\n");
    scanf("%f",&marks);

    if(marks>=80 && marks<100)
        printf("A+");

   else if (marks>=70)
    printf("A");

    else if (marks>=60)
    printf("A-");

 else if
    (marks>=45)
    printf("D");
 else
    printf("Fail\n");

    getch();}

}
