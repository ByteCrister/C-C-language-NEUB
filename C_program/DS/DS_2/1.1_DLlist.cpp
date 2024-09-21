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
    int get(int);
    int set(int,int);
    int remove(int);
    void print();

private:
    int n;
    Node* dummy;
    Node* newNode(int);
    Node* getNode(int);
    void removeNode(Node*);
    void addBefore(Node*,int);
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
    node->next=node->prev=NULL;
    return node;
}

int dl::get(int i)
{
    return getNode(i)->x;
}

int dl::set(int i, int data)
{
    Node* u=getNode(i);

    int pre=u->x;
    u->x=data;
    return pre;
}

void dl::add(int i, int data)
{
    addBefore(getNode(i),data);
}

int dl::remove(int i)
{
    Node* u=getNode(i);
    int pre=u->x;
    removeNode(u);

    return pre;
}

Node* dl::getNode(int i)
{
    Node *p;
    if(i<n/2)
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

void dl::addBefore(Node* w, int data)
{
    Node* u=newNode(data);

    u->prev=w->prev;
    u->next=w;
    u->prev->next=u;
    u->next->prev=u;
    n++;
}

void dl::removeNode(Node* w)
{
    w->prev->next=w->next;
    w->next->prev=w->prev;
    n--;
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
    printf("\n");
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
    ob.add(3,6);
    ob.add(3,7);
    ob.add(0,8);
    ob.add(5,9);

    ob.print();

    printf("\nRemove-> %d : ",ob.remove(0));
    ob.print();

    printf("\nRemove-> %d : ",ob.remove(0));
    ob.print();

    printf("\nRemove-> %d : ",ob.remove(4));
    ob.print();

    printf("\nRemove-> %d : ",ob.remove(1));
    ob.print();

    printf("\nRemove-> %d : ",ob.remove(3));
    ob.print();

    printf("\nset(2,10) : %d -> ",ob.set(2,10));
    ob.print();

    return 0;
}
