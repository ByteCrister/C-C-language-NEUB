#include<stdio.h>

class Node{
    public:
    int x;
    Node* prev,*next;
};

class dll{
    public:
    dll();
    void add(int,int);
    int remove(int);
    int set(int,int);
    int get(int);
    void _prinit();

    private:
    int n;
    Node* dummy;
    Node* addBefore(Node*,int);
    void removeNode(Node*);
    Node* getNode(int);
    Node* newNode(int);
};

dll::dll(){
    n=0;
    dummy=newNode(NULL);
    dummy->next=dummy;
    dummy->prev=dummy;
}

Node* dll::newNode(int data){
    Node* node=new Node;
    node->x=data;
    node->next=NULL;
    node->prev=NULL;
    return node;
}

Node* dll::addBefore(Node* w,int data){
    Node* u=newNode(data);
    u->prev=w->prev;
    u->next=w;
    u->next->prev=u;
    u->prev->next=u;
    n++;
    return u;
}

void dll::add(int i,int data){
    addBefore(getNode(i),data);
}

void dll::removeNode(Node* w){

    w->prev->next=w->next;
    w->next->prev=w->prev;
    n--;
}

int dll::remove(int i){
    Node* u=getNode(i);
    int previous=u->x;
    removeNode(u);
    return previous;
}

Node* dll::getNode(int i){
    Node* p;
    if(i<(n/2)){
        p=dummy->next;
        for(int j=0; j<i; j++){
            p=p->next;
        }
    }
    else{
        p=dummy;
        for(int j=0; j<n-i; j++){
            p=p->prev;
        }
    }
    return p;
}

int dll::get(int i){
    return getNode(i)->x;
}

int dll::set(int i,int data){
    Node* u=getNode(i);
    int previous=u->x;
    u->x=data;
    return previous;
}

void dll::_prinit(){
    Node* index=dummy->next;
    printf("[ ");
    while(index!=dummy){
        printf("%d ",index->x);
        index=index->next;
    }
    printf("]");
    printf("\n");
}
int main(){

    dll ob;
    printf("Initial List-> ");
    ob._prinit();

    ob.add(0,1);
    ob.add(0,2);
    ob.add(0,3);
    ob.add(0,4);
    ob.add(0,5);
    printf("\nList-> ");
    ob._prinit();

    printf("\nList-> ");
    ob.add(2,6);
    ob.add(1,7);
    ob._prinit();

    printf("\nGet(4)-> %d",ob.get(4));
    printf("\nset(2,20)-> %d ",ob.set(2,20));
    ob._prinit();

    printf("\nremove(2): %d",ob.remove(2));
    ob._prinit();
    printf("\nremove(0): %d",ob.remove(0));
    ob._prinit();
    printf("\nremove(1): %d",ob.remove(1));
    ob._prinit();

    return 0;
}