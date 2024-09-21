#include<stdio.h>
int len=4;
int pre;  //Previous value for deQ
int num=0;//number of data of array
int ar[];
int head=0;
int tail=-1;



void enQ(int n)
{
    if(tail==len-1)
    {
        printf("\nArray overflow !");
    }

    if(num+1>len)
    {
         resize();
    }

    else
    {
        tail++;
        num++;
        ar[(head+tail)%len]=n;
        printf("\nEnqueue : %d",ar[(head+tail)%len],num);
    }
}



void resize()
{
     len*=2;
     int Ar[len],k;
     int *pr;
     pr=Ar;

     for(k=0;k<num;k++)
     {
          *(pr+k)=ar[(head+k)%(len/2)];
     }
     ar[len]=pr;
     head=0;
}



int deQ()
{
    if(tail==-1)
    {
        printf("\nArray underflow !");
    }
    else{
    pre=ar[head];
    head=(head+1)%len;
    num-=1;

    return pre;
    }
}



int main()
{
     int ar[len];

    enQ(1);
    enQ(2);
    enQ(3);
    enQ(4);
    enQ(5);
    enQ(6);
    enQ(7);
    enQ(8);
    enQ(9);
    enQ(10);
    enQ(11);

    printf("\nDeque : %d",deQ());

    enQ(12);
    enQ(13);



    return 0;
}
