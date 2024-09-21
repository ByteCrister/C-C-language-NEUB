#include<stdio.h>
#include<stdexcept>

class ArrayQ
{

public:
    ArrayQ();
    void Add(int x);
    int Remove();
    void _printArray();

private:
    void indexcheck();
    int Size();
    int _len;
    int _length();
    void Resize();
    int *a;
    int j;
    int n;
};
ArrayQ::ArrayQ()
{
    _len=1;
    a=new int[_len];
    j=0;
    n=0;
}
void ArrayQ::Add(int x)
{
    if((n+1)>_length())
        Resize();
    a[(j+n)%(_length())]=x;
    n++;
}
int ArrayQ::Remove()
{
    int x=a[j];
    j=((j+1)%(_length()));
    --n;
    if((_length())>=3*n)
        Resize();
    return x;
}
void ArrayQ::Resize()
{
    _len=2*n;
    int Max=_len;
    if(Max<1)
    {
        Max=1;
    }
    int *b=new int[Max];
    int k;
    for(k=0; k<=n-1; k++)
    {
        b[k]=a[(j+k)%(_length())];
    }
    a=b;
    j=0;
}
int ArrayQ::_length()
{
    return _len;
}
int ArrayQ::Size()
{
    return n;
}
void ArrayQ::indexcheck()
{
    if(n>_length()|| n<0)
        throw std::invalid_argument("\nInvalid index !!");
}
void ArrayQ::_printArray()
{
    printf("[ ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[(i+j)%_length()]);  // use modulo operator to print valid elements
    }
    printf("]");
    printf("\n");
}

int main()
{
    ArrayQ st;
    st.Add(1);
    st.Add(2);
    st.Add(3);
    st.Add(4);
    st.Add(5);
    st._printArray();

    //printf("\n\nRemove -> %d, ",st.Remove());
    printf("\n\nRemove -> %d, ",st.Remove());
    printf("\n\nRemove -> %d, ",st.Remove());
    st._printArray();
    st.Add(20);
    st.Add(10);
    st.Add(40);
    st.Add(40);
    printf("Array after adding elements -> ");
    st._printArray();
    st.Add(80);
    st.Add(30);
    st.Add(90);

    printf("Array after adding elements -> ");
    st._printArray();

    printf("\n\nRemove -> %d, ",st.Remove());
    st.Remove();
    st._printArray();

    printf("\n\nRemove -> %d, ",st.Remove());
    st.Remove();
    st._printArray();


    return 0;
}
