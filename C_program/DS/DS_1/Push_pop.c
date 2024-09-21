#include<stdio.h>
#include<stdlib.h>

int _len=4;
int *a;
int n=0;
int i=-1;
void init();
void push();
int pop();
int size();
void resize();
void _print();

int main()
{
    init();

    push(1);
    push(2);
    push(3);
    push(4);

    _print();

    push(5);
    push(6);

    printf("\npush : %d, %d",5,6);

    printf("\nArray-> ");

    _print();

    printf("\nPop : %d",pop());

    push(7);

    printf("\nPush : %d, Array ->");
    _print();

    return 0;
}

void init()
{
    a=(int *)malloc(_len*sizeof(int));
    n=0;
}

int size()
{
    return n;
}
void push(int x)
{

    if(size()==_len)
     printf("\nArray overflow !\n\n");
        resize();

    i++;
    a[i]=x;
    ++n;
}

int pop()
{
    if(i==-1)
    {
        printf("\nArray underflow !!");
    }

    if(_len>3*size())
        resize();

    int previous=a[i];
    i--;
    n--;
    return previous;
}

void resize()
{
    _len=2*n;
    int max=_len;

    if(max<1)
        max=1;

    int *b=(int *)malloc(max*sizeof(int));

    for(int j=0; j<n; j++)
    {
        b[j]=a[j];
    }
    a=b;
    //printf("\nArray resized\n");
}

void _print()
{
     printf("[ ");
     for(int j=0; j<n; j++)
     {
          printf("%d",a[j]);
     }
     printf("]");

     printf("\n\n");
}
