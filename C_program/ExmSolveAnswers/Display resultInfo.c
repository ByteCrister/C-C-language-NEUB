#include<stdio.h>
int main()
{
    int roll,m1,m2,m3,m4,m5;
    float avg;
    char name[20];

    printf("\n\nWrite your informations\n\n");

    printf("Name :");
    gets(name);

    printf("\nRoll :");
    scanf("%d",&roll);

    printf("\nPhy Mark : ");
    scanf("%d",&m1);
    printf("\nChy Mark : ");
    scanf("%d",&m2);
    printf("\nMat Mark : ");
    scanf("%d",&m3);
    printf("\nC pro Mark : ");
    scanf("%d",&m4);
    printf("\nEng Mark : ");
    scanf("%d",&m5);

    printf("\nYour Input informations\n");
    printf("\nName : ");
    puts(name);
    printf("\nID : %d",roll);

    avg=(float)(m1+m2+m3+m4+m5)/5;

    printf("\nAvarage Marks : %.2f",avg);
    printf("\nLetter Grade : ");

    if(avg>79)
    {
        printf("A+");
    }
    else if(avg>69)
    {
        printf("A");
    }
    else if(avg>59)
    {
        printf("A-");
    }
    else if(avg>49)
    {
        printf("B");
    }
    else if(avg>39)
    {
        printf("C");
    }
    else if(avg>32)
    {
        printf("D");
    }
    else
        printf("F !!");

    getch();
}
