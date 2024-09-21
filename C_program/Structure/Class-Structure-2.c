#include<stdio.h>
typedef struct
{

    int day;
    char name[100];
    float salary;

} InOfman;

int main()
{
    int n,i;
    InOfman man[100];
    printf("How many member's ? =");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n\nEnter information of %dst member ->\n\n",i+1);
        printf("Name :");
        fflush(stdin);
        gets(man[i].name);                 //scanf("%s",man[i].name);
        printf("Working day's :");
        scanf("%d",&man[i].day);
        printf("Salary :");
        scanf("%f",&man[i].salary);
        printf("\n");
    }

    printf("\t\t\t\t\t\t[INFORMATION SHEET]\n\n");
    printf("No.");
    printf("\t\tName");
    printf("\t\t\t\tWorking day's");
    printf("\t\t\t\t\tSalary\n\n");

    for(i=0; i<n; i++)
    {
        printf("%d",i+1);
        printf("\t\t%s",man[i].name);
        printf("\t\t\t\t%d",man[i].day);
        printf("\t\t\t\t\t\t%.2f",man[i].salary);

        printf("\n");
    }




    getch();
}
