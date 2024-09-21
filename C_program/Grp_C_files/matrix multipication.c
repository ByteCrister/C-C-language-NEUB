#include<stdio.h>
int main()
{
   int first[10][10],second[10][10],result[10][10], r1,r2,c1,c2,i,j,k,sum=0;

   printf("Enter the rows and columns for first matrix : ");
     scanf("%d %d",&r1,&c1);

   printf("Enter the rows and columns for second matrix : ");
     scanf("%d %d",&r2,&c2);

     while(c1!=r2)
    {
        printf("Error !! columns of first matrix is not equal to second matrix's rows\n");

        printf("Enter the rows and columns for first matrix : ");
         scanf("%d %d",&r1,&c1);

        printf("Enter the rows and columns for second matrix : ");
         scanf("%d %d",&r2,&c2);
    }
                            /********
                    taking input for first matrix
                            *******/

  for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
        {    printf("first matrix [%d][%d]= ",i,j);

                scanf("%d",&first[i][j]);
        }
  }
           printf("\n");

                            /********
                    taking input for second matrix
                            *******/

  for(i=0;i<r2;i++)
  {
      for(j=0;j<c2;j++)

        {    printf("second matrix [%d][%d]= ",i,j);

                scanf("%d",&second[i][j]);
        }
  }

         printf("\n");


                            /********
                     printing first matrix
                          *******/
       printf("\n\n First matrix : \n");

   for(i=0;i<r1;i++)
  {
      printf("\t\t");

      for(j=0;j<c1;j++)

        {
           printf("%d ",first[i][j]);

        }
         printf("\n");
  }

                            /********
                     printing second matrix
                          *******/
       printf("\n\n Second matrix : \n");

   for(i=0;i<r2;i++)

  {
      printf("\t\t");

      for(j=0;j<c2;j++)

          {
             printf("%d ",second[i][j]);

          }
         printf("\n");
  }
                            /********
                        Multiplying matrix
                             *******/

for(i=0;i<r1;i++)
  {

      for(j=0;j<c2;j++)

          {

            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result [i][j]=sum;
            sum = 0;

          }

  }


                           /********
                     printing  result matrix
                            *******/


                 printf("\n\n Result matrix : \n");

   for(i=0;i<r1;i++)

  {
      printf("\t\t");

      for(j=0;j<c2;j++)

          {
             printf("%d ",result[i][j]);

          }
         printf("\n");
  }







  return 0;
}
