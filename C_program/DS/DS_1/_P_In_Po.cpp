#include<stdio.h>
class Node{
    public:
    int x;
    Node *left,*right;
};
class tree{
    public:
    void PreOrder(Node*);
    void InOrder(Node*);
    void PostOrder(Node*);
    void creatNode(Node*&,int);
    private:
    Node* newNode(int);
};

Node* tree::newNode(int data){
    Node* node=new Node;
    node->x=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void tree::creatNode(Node*& u,int data){
    if(u==NULL){
        u=newNode(data);
    }
    else if((u->x)>data){
        creatNode(u->left,data);
    }
    else{
        creatNode(u->right,data);
    }
}

void tree::PreOrder(Node* n){
    if(n==NULL){
        return;
    }
    else{
        printf("%d ",n->x);
        PreOrder(n->left);
        PreOrder(n->right);
    }
}

void tree::InOrder(Node* u){
    if(u==NULL){
        return;
    }
    else{
        InOrder(u->left);
        printf("%d ",u->x);
        InOrder(u->right);
    }
}

void tree::PostOrder(Node* u){
    if(u==NULL){
        return ;
    }
    else{
        PostOrder(u->left);
        PostOrder(u->right);
        printf("%d ",u->x);
    }
}

int main(){

    tree ob;
    Node* NODE=NULL;
    ob.creatNode(NODE,20);
    ob.creatNode(NODE,22);
    ob.creatNode(NODE,10);
    ob.creatNode(NODE,54);
    ob.creatNode(NODE,9);
    ob.creatNode(NODE,2);
    ob.creatNode(NODE,30);
    ob.creatNode(NODE,26);

    printf("PreOrderTraversal-> ");
    ob.PreOrder(NODE);
    printf("\nInOrderTraversal-> ");
    ob.InOrder(NODE);
    printf("\nPostOrderTraversal-> ");
    ob.PostOrder(NODE);
    
    return 0;
}