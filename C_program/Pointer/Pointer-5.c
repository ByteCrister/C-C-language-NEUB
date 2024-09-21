#include<stdio.h>
int iam(int a,int b,int c)
{
     int *p;
     if(a>b && a>c)
          p=&a;
     else if(b>a && b>c)
          p=&b;
     else
          p=&c;
     return *p;

}

int main()
{
     int a,b,c;

     printf("Enter three number :");
     scanf("%d%d%d",&a,&b,&c);

     int n=iam(a,b,c);
     printf("%d is large ",n);

     getch();
}
