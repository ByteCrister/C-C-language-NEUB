#include<stdio.h>

typedef struct
{
     int d,m,y;
}DMY;

void d_m_y(DMY dmy)
{
    printf("\nYour Info -> %d-%d-%d",dmy.d,dmy.m,dmy.y);
}

int main()
{
     DMY dmy;
     printf("Enter date : ");
     scanf("%d",&dmy.d);

     printf("\nEnter month : ");
     scanf("%d",&dmy.m);

     printf("\nEnter year : ");
     scanf("%d",&dmy.y);

     d_m_y(dmy);

     return 0;
}
