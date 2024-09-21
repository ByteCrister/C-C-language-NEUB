#include<stdio.h>

class _list
{
public:
    _list();
    void _add(int i,int x);
    int _remove(int i);
    void _print_list();

private:
    int len;
    int n;
    int *a;
    int index;
};

_list::_list()
{
    len=8;
    a=new int[len];
    n=0;
    index=0;
}

void _list::_add(int i,int x)
{
    if(n==len)
    {
        printf("\nArray Overflow !\n");
    }
    else
    {
        for(index=n-1; index>=i; index--)
        {
            a[index+1]=a[index];
        }
        a[i]=x;
        n++;
    }
}

int _list::_remove(int i)
{
    if(n==0)
    {
        printf("\nArray Underflow !\n");
    }
    else
    {
        int previous=a[i];
        for(index=i; index<n-1; index++)
        {
            a[index]=a[index+1];
        }
        n--;
        return previous;
    }
}

void _list::_print_list()
{
    printf("[ ");
    for(index=0; index<n; index++)
    {
        printf("%d ",a[index]);
    }
    printf(" ]");
    printf("\n\n");
}
int main()
{
    _list ob;
    ob._print_list();
    ob._remove(5);

    ob._add(0,1);
    ob._add(0,2);
    ob._add(0,3);
    ob._add(0,4);
    ob._print_list();
    ob._add(3,5);
    ob._print_list();
    ob._add(2,6);
    ob._add(2,7);
    ob._print_list();
    ob._add(1,8);
    ob._add(1,9);
    ob._print_list();

    ob._remove(4);
    ob._print_list();
    ob._remove(1);
    ob._print_list();
    ob._remove(1);
    ob._print_list();


    return 0;
}
