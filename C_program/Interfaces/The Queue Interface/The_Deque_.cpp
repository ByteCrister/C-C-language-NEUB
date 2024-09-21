#include<stdio.h>
class deQ
{
public:
    deQ();
    void add_first(int x);
    void add_last(int x);
    int remove_first();
    int remove_last();
    void _print_deQ();

private:
    int len;
    int n;
    int top;
    int index;
    int *a;
};

deQ::deQ()
{
    len=8;
    n=0;
    top=0;
    index=-1;
    a=new int[len];
}

void deQ::add_first(int x)
{
    if(n==len)
    {
        printf("\nArray Overflow\n");
    }
    for(int i=n-1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    index++;
    a[top]=x;
    n++;

}

void deQ::add_last(int x)
{
    if(n==len)
    {
        printf("\nArray Overflow\n");
    }
    index++;
    a[index]=x;
    n++;
}

int deQ::remove_first()
{
    if(index==-1)
    {
        printf("\nArray Underflow\n");
    }
    else
    {
        int previous=a[index];
        for(int i=0; i<=n-2; i++)
        {
            a[i]=a[i+1];
        }
        index--;
        n--;
        return previous;
    }
}

int deQ::remove_last()
{
    if(index==-1)
    {
        printf("\nArray Underflow\n");
    }
    else
    {
        int previous=a[index];
        index--;
        n--;
        return previous;
    }
}

void deQ::_print_deQ()
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
    deQ ob;
    ob.remove_first();

    ob.add_first(10);
    ob.add_first(11);
    ob._print_deQ();
    ob.remove_first();
    ob._print_deQ();
    ob.add_last(7);
    ob.add_last(9);
    ob._print_deQ();
    ob.add_first(6);
    ob._print_deQ();
    ob.remove_last();
    ob._print_deQ();
    ob.add_first(12);
    ob.add_first(13);
    ob.add_first(14);

    ob._print_deQ();

    return 0;
}
