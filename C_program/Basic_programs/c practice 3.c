#include<stdio.h>
main()
{
     int a,b,c;
     printf("Enter three intejer number : ");
     scanf("%d%d%d",&a,&b,&c);
     if(a>b&&a>c)
     {
          printf("%d is large",a);
     }
     else if (b>c)
     {
          printf("%d is large",b);
     }
     else
          printf("%d is large",c);
     getch();

}
