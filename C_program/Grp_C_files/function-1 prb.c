#include<stdio.h>
    int sum (int a,int b);
     int sum (int a,int b)
    {
    int sum;
    sum=a+b;
    return sum;
}
int main(){
    int a,b,s;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum=%d",sum);

return 0;
}
