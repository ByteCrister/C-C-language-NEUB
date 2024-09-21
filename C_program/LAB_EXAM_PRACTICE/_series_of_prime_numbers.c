#include<stdio.h>
int main()
{
     int n1,n2,count=0;
     printf("Give the number of series: 'n1-n2'-> ");
     scanf("%d%d",&n1,&n2);
     printf("\nPrime numbers from : %d-%d ->",n1,n2);

     for(int i=n1; i<=n2; i++){
          for(int j=2; j<i; j++){
               if(i%j==0){
                    count++;
                    break;
               }
          }
          if(count==0){
               printf("%d ",i);
          }
          count=0;
     }

     return 0;
}
