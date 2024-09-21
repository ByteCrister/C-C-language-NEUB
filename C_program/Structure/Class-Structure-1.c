#include<stdio.h>
typedef struct
{

    int id;
    char name[50];
    float mark;

} mom;


int main()
{
    mom st;
    printf("Name :");
    gets(st.name);
    printf("ID :");
    scanf("%d",&st.id);
    printf("Mark :");
    scanf("%f",&st.mark);

    printf("Name : %s\n",st.name);
    printf("ID : %d\n",st.id);
    printf("Mark : %.2f\n",st.mark);


    return 0;
}
