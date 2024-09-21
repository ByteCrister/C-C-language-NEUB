
#include<stdio.h>
void p();
typedef struct
{
    int age;
    float salary;
    char name[50];
}
man;
int main()
{
    int n,i;
    man person[20];

    printf("How many persons ?");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n[Person %d]\n",i+1);
        printf("Name :");
        fflush(stdin);
        gets(person[i].name);
        printf("Salary :");
        scanf("%f",&person[i].salary);
        printf("Age :");
        scanf("%d",&person[i].age);

    }

    p(person,n);



    return 0;
}

void p(man person[],int n)
{
     int i;
     for(i=0; i<n; i++)
    {
        printf("\n[Data of person %d]\n",i+1);
        printf("Name :%s\n",person[i].name);
        printf("Age :%d\n",person[i].age);
        printf("Salary :%.2f\n",person[i].salary);
        printf("\n");
    }
}
