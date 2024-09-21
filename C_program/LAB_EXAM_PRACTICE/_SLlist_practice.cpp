#include<stdio.h>

class Node
{
public:
    int x;
    Node* next;
};

class sl
{
public:
    sl();
    void push(int);
    void enqueue(int);
    int pop();
    int dequeue();
    void print();

private:
    Node* newNode(int);
    int n;
    Node* head;
    Node* tail;
};

sl::sl()
{
    n=0;
    head=NULL;
    tail=NULL;
}

Node* sl::newNode(int data)
{
    Node* node=new Node;
    node->x=data;
    node->next=NULL;
    return node;
}

void sl::push(int data)
{
    Node* u=newNode(data);
    u->next=head;
    head=u;

    if(n==0)
        tail=u;
    n++;
}

int sl::pop()
{
    if(n==0)
        return NULL;
    int prev=head->x;
    head=head->next;
    n--;

    if(n==0)
        tail=NULL;

    return prev;
}

void sl::enqueue(int data)
{
    Node* u=newNode(data);
    if(n==0)
        head=u;
    else
        tail->next=u;
    tail=u;
    n++;
}

int sl::dequeue()
{
    return pop();
}

void sl::print()
{
    Node* index=head;
    printf("[ ");
    while(index!=NULL)
    {
        printf("%d ",index->x);
        index=index->next;
    }
    printf("]");
    printf("\n\n");
}
int main()
{
     sl ob;
     ob.print();

     ob.push(1);
     ob.push(2);
     ob.push(3);
     ob.push(4);
     ob.push(5);
     ob.push(6);

     ob.print();

     printf("\nPop(%d)-> ",ob.pop());
     ob.print();

     printf("\nPop(%d)-> ",ob.pop());
     ob.print();

     printf("\nPop(%d)-> ",ob.pop());
     ob.print();

     printf("\nPop(%d)-> ",ob.pop());
     ob.print();

     printf("\nEnqueue(10)-> ");
     ob.enqueue(10);
     ob.print();

     printf("\nEnqueue(11)-> ");
     ob.enqueue(11);
     ob.print();

     printf("\nEnqueue(12)-> ");
     ob.enqueue(12);
     ob.print();

     printf("\nDequeue(%d)-> ",ob.dequeue());
     ob.print();

     printf("\nDequeue(%d)-> ",ob.dequeue());
     ob.print();

     printf("\nDequeue(%d)-> ",ob.dequeue());
     ob.print();

     printf("\nDequeue(%d)-> ",ob.dequeue());
     ob.print();

     printf("\nDequeue(%d)-> ",ob.dequeue());
     ob.print();

    return 0;
}
