#include<stdio.h>
#include<stdlib.h>
struct n{
    int x;
    struct n *next;
};
class sll{
    public:

    sll();
    void push(int data);
    int pop();
    void enqueue(int data);
    int dequeue();
    void print_sll_();
    private:

    int N;
    struct n *head;
    struct n *tail;
    struct n *Newnode(int data);
};

sll::sll()
{
    N=0;
    head=NULL;
    tail=NULL;
}

struct n *sll::Newnode(int data){
    struct n *node=new n;
    //node=new int[sizeof(struct n)];
    node->x=data;
    node->next=NULL;
    return node;
}

void sll::push(int data){
    struct n *u;
    u=Newnode(data);
    u->next=head;
    head=u;
    if(N==0){
        tail=u;
    }
    N++;
}

int sll::pop(){
    if(N==0){
        return NULL;
    }
    int previous=head->x;
    head=head->next;
    N--;
    if(N==0){
        tail=NULL;
    }
    return previous;
}

void sll::print_sll_(){
    struct n *index=head;
    printf("[ ");
    while(index!=NULL){
        printf("%d ",index->x);
        index=index->next;
    }
    printf("]");
    printf("\n");
}

int main(){
    sll ob;
    ob.print_sll_();
}