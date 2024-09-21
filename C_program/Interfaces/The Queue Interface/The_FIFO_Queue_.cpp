#include<stdio.h>
class fifo
{
public:
    fifo();
    void enqueue(int x);
    int dequeue();
    void _print_FIFO();
    int _prioQ();
private:
    int len;
    int top;
    int index;
    int n;
    int *a;
};

fifo::fifo()
{
    len=8;
    top=0;
    index=-1;
    n=0;
    a=new int[len];
}

void fifo::enqueue(int x)
{
    if(n==len)
    {
        printf("\nArray Overflow\n");
    }
    index++;
    a[index]=x;
    n++;
}

int fifo::dequeue()
{
    if(index==-1)
    {
        printf("\nArray Underflow\n");
    }
    int previous=a[top];
    for(int i=0; i<=n-2; i++)
    {
        a[i]=a[i+1];
    }
    index--;
    n--;
}

int fifo::_prioQ()
{
    int Min=a[0],j=0;
    for(int i=1; i<n; i++)
    {
        if(Min>a[i])
        {
            Min=a[i];
            j=i;
        }
    }
    for(int k=j;k<=n-2;k++)
    {
         a[k]=a[k+1];
    }
    index--;
    n--;
    return Min;
}
void fifo::_print_FIFO()
{
    printf("[ ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf(" ]");
    printf("\n\n");
}
int main()
{
    fifo ob;
    ob.enqueue(1);
    ob.enqueue(2);
    ob.enqueue(3);
    ob.enqueue(4);
    ob._print_FIFO();
    ob.dequeue();
    ob.dequeue();
    ob._print_FIFO();
    ob.enqueue(5);
    ob.enqueue(6);
    ob.enqueue(7);
    ob.enqueue(8);
    ob.enqueue(9);
    ob.enqueue(10);
    ob._print_FIFO();
    printf("\nPrioQ : %d",ob._prioQ());
    ob._print_FIFO();
    ob.enqueue(11);
    ob.enqueue(12);


    return 0;
}
