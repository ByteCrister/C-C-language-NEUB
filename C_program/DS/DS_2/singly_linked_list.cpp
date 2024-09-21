#include<stdio.h>
#include<stdlib.h>
struct n{
    int x;
    int *next;
};

class sll
{
    public:
    sll();
    struct n *newNode(int data);
    void push(int data);
    int pop();
    void enqueue(int data);
    int dequeue();
    void _print();

    private:
    int N;
    struct n *head;
    struct n *tail;
};

sll::sll()
{
    N=0;
    head=NULL;
    tail=NULL;
}

struct n* sll::newNode(int data)
{
    struct n *node;
    node=new struct n[sizeof(n)];
    node->x=data;
    node->next=NULL;
    return node;
}

void sll::push(int data)
{
    struct n *u=newNode(data);
    u->next=head;
    head=u;
    if(n==0)
    {
        tail=u;
    }
    N++;
}

int sll::pop()
{
    if(N==0){
        return NULL;
    }
    int previous=head->x;
    head=head->next;
    n--;
    if(N==0){
        tail=NULL;
    }
    return previous;
}

void sll::enqueue(int data){

    struct n *u=newNode(data);
    if(N==0){
        head=u;
    }
    else{
        tail->next=u;
    }
    tail=u;
    N++;
}

int sll::dequeue(){

    return pop();
}

void sll::_print()
{
    struct n *index=head;
    printf("[ ");
    while(index!=NULL){
        printf("%d ",index->x);
        index=index->next;
    }
    printf("]");
    printf("\n");
}

int main()
{
    sll ob;
    ob._print();

    ob.push(10);
    ob.push(12);
    ob.push(14);
    ob.push(15);
    
    ob._print();
    return 0;
}