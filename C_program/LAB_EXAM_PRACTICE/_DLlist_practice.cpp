#include<stdio.h>

class Node
{
public:
    int x;
    Node *next,*prev;
};

class dl
{
public:
    dl();
    void add(int,int);
    void print();
    int remove(int);
    int get(int);
    int set(int,int);

private:
    int n;
    void addBefore(Node*,int);
    Node* getNode(int);
    void removeNode(Node*);
    Node* newNode(int);
    Node* dummy;
};

dl::dl()
{
    n=0;
    dummy=newNode(NULL);
    dummy->next=dummy;
    dummy->prev=dummy;
}

Node* dl::newNode(int data)
{
    Node* node=new Node;
    node->x=data;
    node->next=NULL;
    node->prev=NULL;
    return node;
}

Node* dl::getNode(int i)
{
    Node* p;
    if(i<(n/2))
    {
        p=dummy->next;
        for(int j=0; j<i; j++)
        {
            p=p->next;
        }
    }
    else
    {
        p=dummy;
        for(int j=0; j<n-i; j++)
        {
            p=p->prev;
        }
    }
    return p;
}

void dl::addBefore(Node* p,int data)
{
    Node* u=newNode(data);
    u->prev=p->prev;
    u->next=p;
    u->prev->next=u;
    u->next->prev=u;
    n++;
}

void dl::removeNode(Node* p)
{
    p->next->prev=p->prev;
    p->prev->next=p->next;
    n--;
}

void dl::add(int i,int data)
{
    addBefore(getNode(i),data);
}

int dl::remove(int i)
{
    Node* u=getNode(i);
    int previous=u->x;
    removeNode(u);
    return previous;
}

int dl::get(int i)
{
    return  getNode(i)->x;
}

int dl::set(int i,int data)
{
    Node* u=getNode(i);
    int previous=u->x;
    u->x=data;
    return previous;
}
void dl::print()
{
    Node* index=dummy->next;
    printf("[ ");
    while(index!=dummy)
    {
        printf("%d ",index->x);
        index=index->next;
    }
    printf("]");
    printf("\n\n");
}
int main()
{
    dl ob;
    ob.print();

    ob.add(0,1);
    ob.add(0,2);
    ob.add(0,3);
    ob.add(0,4);
    ob.add(0,5);
    ob.add(0,6);
    ob.add(0,7);
    ob.add(0,8);

    ob.print();

    printf("\nremove(%d)-> ",ob.remove(6));
    ob.print();

    printf("\nremove(%d)-> ",ob.remove(2));
    ob.print();

    printf("\nremove(%d)-> ",ob.remove(3));
    ob.print();

    printf("\nremove(%d)-> ",ob.remove(0));
    ob.print();


    return 0;
}
