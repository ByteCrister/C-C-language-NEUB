#include<stdio.h>
struct n
{
    int x;
    int *next;
};

class Stack
{
public:
    Stack();
    void push(int data);
    struct n newNode(int data);
    int n;
    int *head;
    int *tail;
};

Stack::Stack()
{
    n=0;
    head=NULL;
    tail=NULL;
}

void Stack::push(int data)
{
    struct n u;
    u.next=head;
    head=u;
}
int main()
{
    Stack ob;

    return 0;
}
