#include<stdio.h>
class lifo
{
public:
    lifo();
    void push(int x);
    int pop();
    void _printf_LIFO();
private:
    int len;
    int index;
    int n;
    int *a;
};

lifo::lifo()
{
    len=6;
    a=new int[len];
    n=0;
    index=-1;
}

void lifo::push(int x)
{
    if(n==len)
    {
        printf("\nArray Overflow\n");
    }
    index++;
    a[index]=x;
    n++;
}

int lifo::pop()
{
    if(index==-1)
    {
        printf("\nArray Underflow\n");
    }
    int previous=a[index];
    index--;
    n--;
}

void lifo::_printf_LIFO()
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
    lifo ob;
    ob.pop();

    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    ob.push(6);
    ob.push(7);
    ob.push(8);
    ob._printf_LIFO();
    ob.pop();
    ob.pop();
    ob.pop();
    ob.pop();
    ob._printf_LIFO();

    return 0;
}
