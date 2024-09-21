
#include<stdio.h>

//global structure

struct agent
{
    int age;
    float salary;
};

struct agent agent1,agent2; //global variable

int main()
{
    struct agent agent4;        //local variable

    struct agent agent3= {20,20000.25};
    agent4.age=21;
    agent4.salary=2100.50;

    printf("Enter agent 1's information\n\n");
    printf("Enter age :");
    scanf("%d",&agent1.age);
    printf("Enter salary :");
    scanf("%f",&agent1.salary);


    printf("\nEnter agent 2's information\n");
    printf("\nEnter age :");
    scanf("%d",&agent2.age);
    printf("Enter salary :");
    scanf("%f",&agent2.salary);

    printf("\n\t[Agent1]\n");
    printf("\tAge :%d\n",agent1.age);
    printf("\tSalary :%.2f\n",agent1.salary);

    printf("\n\t[Agent2]\n");
    printf("\tAge :%d\n",agent2.age);
    printf("\tSalary :%.2f\n",agent2.salary);

    printf("\n\t[Agent3]\n");
    printf("\tAge :%d\n",agent3.age);
    printf("\tSalary :%.2f\n",agent3.salary);

    printf("\n\t[Agent4]\n");
    printf("\tAge :%d\n",agent4.age);
    printf("\tSalary :%.2f\n",agent4.salary);


    getch();
}
