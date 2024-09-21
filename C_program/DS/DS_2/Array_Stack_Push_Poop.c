#include<stdio.h>
#define size 8
int array[size];
int head=-1;
int POP;

//push implementation
void push(int p)
{
    if(head==size-1)
    {
        printf("\nArray overflow!!");
    }

    else
    {
        head++;
        array[head]=p;
        printf("\nPushed : %d",array[head]);
    }
}

//pop implementation
int pop()
{
    if(head==-1)
    {
        printf("\nArray underflow!!");
    }
    else
    {
        POP=array[head];
    }
    head--;

    return POP;
}

//peek implementation . It just return the top value from the array
int peek()
{
    if(head==-1)
    {
        printf("\nNo data is inserted. Can't peek any item.");
    }
    else
    {
        return array[head];
    }

}

int main()
{

    push(1);
    push(2);
    /*push(3);
    push(4);
    push(5);*/

    printf("\nPeek : %d\n",peek());

    /*push(6);
    push(7);
    push(8);
    push(9);*/

    printf("\npop : %d",pop());
   /* printf("\npop : %d",pop());
    printf("\npop : %d",pop());
    printf("\npop : %d",pop());
    printf("\npop : %d",pop());
    printf("\npop : %d",pop());

    printf("\nPeek : %d\n",peek());

    printf("\npop : %d",pop());
    printf("\npop : %d",pop());
    printf("\npop : %d",pop());
    printf("\npop : %d",pop());*/


    return 0;
}
