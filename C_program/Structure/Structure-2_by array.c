#include<stdio.h>
struct person
{
    char name[1000];
    int age;
    float salary;
};

struct person person[10];

int main()
{
    int n,i;
    printf("Enter number of persons :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n\nEnter informations for person %d\n",i+1);
        printf("\nName :");
        scanf("%s",&person[i].name);
        printf("\nAge :");
        scanf("%d",&person[i].age);
        printf("Salary :");
        scanf("%f",&person[i].salary);
    }

    for(i=0; i<n; i++)
    {
        printf("\n\nPerson %d \n\n",i+1);
        printf("Name :%s\n",person[i].name);
        printf("Age :%d\n",person[i].age);
        printf("Salary :%.2f\n",person[i].salary);
    }

    getch();
}
