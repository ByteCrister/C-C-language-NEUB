#include<stdio.h>
#include<stdexcept>

class ArrayDQ
{
public:
    ArrayDQ();
    int Get(int i);
    int Set(int i,int x);
    void Add(int i,int x);
    int Remove(int i);
    void Resize();
    void _print();
    int _Len();
    void _indexcheck();

private:
    int _len;
    int *a;
    int n;
    int j;
};

ArrayDQ::ArrayDQ()
{
    _len=1;
    a=new int[_len];
    j=0;
    n=0;
}

int ArrayDQ::Get(int i)
{
    return a[(j+i)%_Len()];
}

int ArrayDQ::Set(int i,int x)
{
    int previous=a[(j+i)%_Len()];
    a[(j+i)%_Len()]=x;

    return previous;
}

void ArrayDQ::Add(int i,int x)
{
    if(n==_Len())
        Resize();

    if(i<=(n/2))
    {
        j=((j-i)%_Len());

        for(int k=0; k>=i-1; k--)
        {
            a[(j+k)%_Len()]=a[(j+k+1)%_Len()];
        }
    }

    else
    {
        for(int k=n; k>=i+1; k--)
        {
            a[(j+k)%_Len()]=a[(j+k-1)&_Len()];
        }
    }

    a[(j+i)%_Len()]=x;
    n++;
}

int ArrayDQ::Remove(int i)
{
    int previous=a[(j+i)%_Len()];

    if(i<=(n/2))
    {
        for(int k=i; k>=1; k--)
        {
            a[(j+i)%_Len()]=a[(j+k-1)%_Len()];
        }
        j=(j+1)%_Len();
    }



    else
    {
        for(int k=i; k<=n-2; k++)
        {
            a[(j+k)%_Len()]=a[(j+k+1)%_Len()];
        }
    }
    n--;

    if(_Len()>=3*n)
        Resize();

    return previous;
}

void ArrayDQ::Resize()
{
    _len=2*n;
    int Max=_len;
    if(Max<1)
        Max=1;

    int *b=new int[Max];
    for(int k=0; k<=n-1; k++)
    {
        b[k]=a[(j+k)%_Len()];
    }
    a=b;
    j=0;
}

int ArrayDQ::_Len()
{
    return _len;
}

void ArrayDQ::_indexcheck()
{
    if(n<0 || n==_Len())
        throw std::invalid_argument("\nInvalid index !!");
}

void ArrayDQ::_print()
{
    printf("[ ");
    for(int k=j; k<n; k++)
    {
        printf("%d ",a[k%_Len()]);
    }
    printf("]");
    printf("\n\n");
}
int main()
{
    ArrayDQ ob;


    ob.Add(0,10);
    ob.Add(1,11);
    ob.Add(2,12);
    printf("\nCurrent Array ->");
    ob._print();

    printf("\nGet(%d)-> %d",1,ob.Get(1));

    printf("\nAdd(%d,%d)-> ",3,13);
    ob.Add(3,13);
    ob._print();

    printf("\nAdd(%d,%d)-> ",4,18);
    ob.Add(4,18);
    ob._print();


    printf("\nAdd(%d,%d)-> ",5,14);
    ob.Add(5,14);
    ob._print();

    printf("\nAdd(%d,%d)-> ",5,14);
    ob.Add(5,15);
    ob._print();

    printf("\nAdd(%d,%d)-> ",6,16);
    ob.Add(6,16);
    ob._print();

     printf("\nCurrent Array ->");
    ob._print();



    return 0;
}
