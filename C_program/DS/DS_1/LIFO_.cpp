#include<stdio.h>
class lifo
{
public:
    lifo();
    void push(int x);
    int pop();
    void _print();
    void _resize();
private:
    int *a;
    int len;
    int n;
    int i;
};

lifo::lifo()
{
    len=4;
    a=new int[len];
    n=0;
    i=-1;
}

void lifo::push(int x)
{
    if(n==len)
    {
        printf("\nArray overflow");
        _resize();
    }
    i++;
    a[i]=x;
    ++n;
}

int lifo::pop()
{
     if(i==-1)
     {
          printf("\nArray underflow");
     }
     if(len>3*n)
          _resize();

     int previous=a[i];
     --n;
     --i;
     return previous;
}

void lifo::_resize()
{
     len=2*n;
     int _max=len;

     if(_max<1)
     {
          _max=1;
     }
     int *b=new int[_max];
     for(int j=0; j<n; j++)
     {
          b[j]=a[j];
     }
     a=b;
     printf("\nArray resized\n");
}

void lifo::_print()
{
     printf("[ ");
     for(int j=0; j<n; j++)
     {
          printf("%d ",a[j]);
     }
     printf("]");
     printf("\n\n");
}
int main()
{
     lifo ob;

     ob.push(1);
     ob.push(2);
     ob.push(3);
     ob.push(4);
     printf("Push : 1,2,3,4  Array-> ");
     ob._print();

     printf("Push : 5,6,7,8,9,10,11 ");

     ob.push(5);
     ob.push(6);
     ob.push(7);
     ob.push(8);
     ob._print();

     ob.push(9);
     ob.push(10);
     ob.push(11);

     ob._print();

     printf("\nPop : %d",ob.pop());
     printf("\nPop : %d",ob.pop());
     printf("\nPop : %d",ob.pop());
     printf("\nPop : %d\n",ob.pop());

     ob._print();

    return 0;
}
