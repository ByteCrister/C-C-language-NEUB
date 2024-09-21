#include<stdio.h>
#include<stdlib.h>
int *a;
int n;
int _len;
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
    _len=max;
}
void _indexcheck(int i)
{
    if( i<0 || i>=_len){
        printf("\nInvalid index !");
        exit(1);
    }
}
void init()
{
    _len=4;
    a=(int*)malloc(_len*sizeof(int));
    n=0;
}

int Get(int i)
{
     _indexcheck(i);
    return a[i];
}

int Set(int i,int x)
{
     _indexcheck(i);
    int previous=a[i];
    a[i]=x;
    return previous;
}

void Add(int i, int x)
{
    if (n ==_len) resize();

     _indexcheck(i);
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
     _indexcheck(i);
    int x=a[i];
    for(int j=i;j<n;j++)
    a[j]=a[j+1];

    --n;
    if(_len>=3*n)
        resize();
    return x;
}


void _print()
{
    printf("[ ");
    for(int i=0; i<n; i++)
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
    Add(3,15);
    Add(4,16);
    Add(5,17);
    Add(6,18);
    Add(7,19);
    Add(8,20);
    Add(9,21);
    Add(10,22);

    printf("After inserted data's ,Array -> ");
    _print();

    printf("\nIndex[%d]->Removed(%d)\n",0,Remove(0));

    printf("Current Array -> ");
    _print();

    // printf("\nIndex[%d]->Removed(%d)\n",1,Remove(1));
    // printf("\nIndex[%d]->Removed(%d)\n",1,Remove(1));
    // printf("\nIndex[%d]->Removed(%d)\n",2,Remove(2));
    // printf("\nIndex[%d]->Removed(%d)\n",5,Remove(5));
    // printf("\nIndex[%d]->Removed(%d)\n",3,Remove(3));

    // printf("Current Array -> ");
    // _print();

    printf("\nGet(%d) -> %d\n",1,Get(1));
    printf("\nGet(%d) -> %d\n",0,Get(0));

    // printf("Current Array -> ");
    // _print();

    // printf("\nSet(%d,%d)->Previous : %d\n",2,106,Set(2,106));


    //  printf("Current Array -> ");
    // _print();


    return 0;
}
