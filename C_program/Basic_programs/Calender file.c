#include<stdio.h>
int main()
{
     char *months[]={" JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
     int daysInmonths[]={31,28,31,30,31,30,31,30,31,30,31,30};

     int i,j,weeks=0;

     for(i=0;i<12;i++)
     {
          printf("\n\t----------   %s   ----------\n\n",months[i]);
          printf("\tSun   Mon   Tue   Wed   Thu   Fri   Sat");

          for(j=1;j<=daysInmonths[i];j++)
          {


               printf("%d   ",j);
          }


     }

     return 0;
}
