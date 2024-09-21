#include<stdio.h>
#include<stdexcept>

class arrayStack
{

public:
    arrayStack();
    int Get(int i);
    int Set(int i,int x);
    void Add(int i,int x);
    int Remove(int i);
    void _prArray();
    int Size();

private:
    int _len;
    int *a;
    int n;
    void Resize();
    int _length();
    void _indexCheck(int i);


};
arrayStack::arrayStack()
{
    _len=1;
    a=new int[_len];
    n=0;
}
int arrayStack::Size()
{
    return n;
}
int arrayStack::Get(int i)
{
      _indexCheck(i);
    return a[i];
}
int arrayStack::Set(int i,int x)
{
     _indexCheck(i);
    int pre=a[i];
    a[i]=x;
    return pre;
}
void arrayStack::Add(int i,int x)
{
     _indexCheck(i);
    if(Size()==_length())
        Resize();
    for(int j=Size()-1; j>=i; j++)
    {
        a[j+1]=a[j];
    }
    a[i]=x;
    ++n;
}
int arrayStack::Remove(int i)
{
     _indexCheck(i);
    int x=a[i];
    for(int j=i; j<=Size()-2; j++)
    {
        a[j]=a[j+1];
    }
    --n;
    if(_length()>=3*n)
        Resize();
    return x;
}
void arrayStack::Resize()
{
    _len=n*2;
    int Max=_len;
    if(Max<1)
        Max=1;
    int *b=new int[Max];
    for(int i=0; i<Size(); i++)
    {
        b[i]=a[i];
    }
    a=b;
}
int arrayStack::_length()
{
    return _len;
}
void arrayStack::_indexCheck(int i)
{
     if(i<0 || i>Size())
          {
               throw std::invalid_argument("Invalid index !!");
          }
}
void arrayStack::_prArray()
{
     printf("[ ");
     for(int i=0; i<Size(); i++)
     {
          printf("%d ",a[i]);
     }
      printf("]");
}

int main()
{
     arrayStack st;
     int i,x;
     printf("Array without any value : ");
     st._prArray();
     printf("\n\n");

     printf("After adding values in Array -> ");
     st.Add(0,1);
     st.Add(1,2);
     st.Add(2,3);
     st.Add(3,4);
     st.Add(4,5);
     st.Add(5,6);
     st.Add(6,7);
     st.Add(7,8);
     st.Add(8,9);
     st.Add(9,10);
     st._prArray();

     printf("\n\nGet(%d) : %d",5,st.Get(5));

     printf("\nArray after removing value from index %d : %d->",4,st.Remove(4));
     st._prArray();
     printf("\nArray after removing value from index %d : %d->",6,st.Remove(6));
     st._prArray();
     printf("\nArray after removing value from index %d : %d->",2,st.Remove(2));
     st._prArray();
     printf("\nArray after removing value from index %d : %d->",1,st.Remove(1));
     st._prArray();
     printf("\nArray after removing value from index %d : %d->",0,st.Remove(0));
     st._prArray();


     printf("\nThe Values remain in the array-> ");
     st._prArray();

     printf("\nSet(%d) : %d\n",2,st.Set(2,100));

     st._prArray();

     printf("\nsize : %d",st.Size());

    return 0;
}
