#include<stdio.h>
int main()
{
     int n,num,sum=0;
     printf("Enter n : ");
     scanf("%d",&n);

     for(int i=1; i<=n; i++){
          printf("%d.Enter number : ",i);
          scanf("%d",&num);
          sum+=num;
     }
     printf("\nAvarage : %d",sum/n);

     return 0;
}
