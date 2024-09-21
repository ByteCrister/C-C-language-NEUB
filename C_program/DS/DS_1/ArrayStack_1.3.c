#include<stdio.h>
#include<stdlib.h>
int *a;
int n;
int _len;

void init()
{
    _len=4;
    a=(int *)malloc(_len*sizeof(int));
    n=0;
}

int Get(int i)
{
    return a[i];
}

int Set(int i,int x)
{
    int previous=a[i];
    a[i]=x;
    return previous;
}

void Add(int i, int x)
{
    if (n == length())
        resize();

    // Shift elements starting from the last index
    for (int j = n-1; j >= i; j--)
    {
        a[j+1] = a[j];
    }

    a[i] = x;
    n++;
}

int Remove(int i)
{
    int x=a[i];
    a[i]=a[i+1];
    n--;
    if(length()>=3*n)
        resize();
    return x;
}

void resize()
{
    _len=2*n;
    int max=_len;
    if(max<1)
        max=1;
    int *b=(int *)malloc(max*sizeof(int));
    for(int i=0; i<=n-1; i++)
    {
        b[i]=a[i];
    }
    a=b;
}

int size()
{
    return n;
}

int length()
{
    return _len;
}

void _print()
{
    printf("[ ");
    for(int i=0; i<size(); i++)
    {
        printf("%d ",a[i]);
    }
    printf("]");
    printf("\n\n");
}

int main()
{
    init();
    _print();
    Add(0,12);
    Add(1,13);
    Add(2,14);
    Add(3,0); // initializing added values
    Add(4,15);
    Add(5,16);
    Add(6,17);
    Add(7,18);
    Add(8,19);
    Add(9,10);
    Add(10,16);
    Add(10,16);
    _print();

    return 0;
}

