#include<stdio.h>
int main()
{ int a=10,b;
printf("enter intejer number=");
scanf("%d",&b);
if (b<100 &&b%7==0)
a+=100;
else if(b<100 &&b%5!=2)
              a++;
else if(b<30 &&b%10==0 &&b%2!=0)
a--;
else
                a*=100;
printf("%d",&a);
return 0;;
}
