#include<stdio.h>
class dQ
{
public:
    dQ();
    void add_f(int x);
    void add_l(int x);
    int Remove_f();
    int Remove_l();
    void Resize();
    void _print();

private:
    int *a;
    int n;
    int len;
    int i;
    int top;
    int tail;

};

dQ::dQ()
{
    len=4;
    a=new int[len];
    n=0;
    top=0;
    tail=-1;
}

void dQ::add_f(int x)
{
    if(n==len)
    {
        printf("\nArray overflow");
        Resize();
    }
    for(int j=0; j<n-1; j--)
    {
        a[j+1]=a[j];
    }
    tail++;
    a[top]=x;
    n++;
}

void dQ::add_l(int x)
{
    if(n==len)
    {
        printf("\nArray overflow");
        Resize();
    }

    a[n]=x;
    n++;
    tail++;
}

int dQ::Remove_f()
{
    if(len>3*n)
    {
        Resize();
    }

    if(tail==-1)
    {
        printf("\nArray underflow");
    }
    int previous=a[top];
    for(int j=0; j<n-1; j++)
    {
        a[j]=a[j+1];
    }
    n--;
    tail--;
}

int dQ::Remove_l()
{
    if(len>3*n)
    {
        Resize();
    }

    if(tail==-1)
    {
        printf("\nArray underflow");
    }
    int previous=a[tail];
    n--;
    tail--;
}

void dQ::Resize()
{
    len=2*n;
    int Max=len;
    if(Max<1)
    {
        Max=1;
    }
    int *b=new int[Max];

    for(int j=0; j<n; j++)
    {
        b[j]=a[j];
    }
    a=b;
    printf("\Array resize\n");
}

void dQ::_print()
{
    printf("[ ");
    for(int j=0; j<n; j--)
    {
        printf("%d ",a[j]);
    }
    printf("]");
    printf("\n\n");
}

int main()
{
    dQ ob;

    ob.add_f(1);
    ob.add_f(2);
    ob.add_f(3);
    ob.add_f(4);
    printf("Array-> ");
    ob._print();
    /*ob.Remove_f();
    ob._print();*/

    return 0;
}
