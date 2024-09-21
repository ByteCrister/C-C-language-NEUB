#include<stdio.h>
typedef struct
{
     int a;
     char b[20];
     double c;
}p;

union t1
{
     int a;
     double b;
};
union t2
{
     float a;
    char n[20];
};

int main()
{
     union t1 a;
     union t2 b;
     p c;

     printf("Size of t1 = %d bytes\n",sizeof(a));
     printf("Size of t2 = %d bytes\n",sizeof(b));
     printf("Size of c = %d bytes\n",sizeof(c));


     return 0;
}
