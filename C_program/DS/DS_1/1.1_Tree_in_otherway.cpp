#include<stdio.h>

class Node{
    public:
    int x;
    Node *left,*right;
};

class tree{
    public:
    tree();
    int N;
    void InOrderRecursive(Node*);
    Node* creatTree(int[],int,int);

    private:
    Node* newNode(int);
};

tree::tree(){
    N=0;
}

Node* tree::creatTree(int a[],int i,int size){
    Node* root=NULL;

    if(i<size){
        root=newNode(a[i]);
        N++;

        root->left=creatTree(a,2*i+1,size);
        root->right=creatTree(a,2*i+2,size);
    }
    return root;
}

Node* tree::newNode(int data){
    Node* node=new Node;
    node->x=data;
    node->left=node->right=NULL;
    return node;
}

void tree::InOrderRecursive(Node* r){
    if(r==NULL)
        return;

    InOrderRecursive(r->left);
    printf("%d ",r->x);
    InOrderRecursive(r->right);
}

int main(){
    tree ob;

    int a[]={1, 2, 3, 4, 5, 6, 6, 6, 6};
    Node *ROOT=ob.creatTree(a,0,sizeof(a)/sizeof(0));

    printf("Nodes : %d",ob.N);

    printf("\n\n");

    ob.InOrderRecursive(ROOT);

    return 0;
}