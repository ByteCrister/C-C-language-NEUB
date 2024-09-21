#include<stdio.h>

class Node{
    public:
    int data;
    Node *left,*right,*parent;
};

class bt{
    public:
    bt();
    int depth(Node*);
    int heightRecursive(Node*);
    int sizeRecursive(Node*);
    void _print(Node*);
    void setRoot(Node*);

    private:
    Node* root;
};

bt::bt(){
    root=NULL;
}

void bt::setRoot(Node* r){
    root=r;
}
int bt::depth(Node* u){
    int d=0;
    while(u!=root){
        u=u->parent;
        d++;
    }
    return d;
}

int bt::heightRecursive(Node* u){
    if (u==NULL)
    return 0;

    int leftHeight=heightRecursive(u->left);
    int rightHeight=heightRecursive(u->right);
    int max;
    if(leftHeight>rightHeight){
        max=leftHeight;
    }
    else{
        max=rightHeight;
    }
    return 1+max;
}

int bt::sizeRecursive(Node* u){
    if(u==NULL)
    return 0;

    return 1+sizeRecursive(u->left)+sizeRecursive(u->right);
}

void bt::_print(Node* node){
    if(node==NULL)
    return ;

    _print(node->left);
    printf("%d ",node->data);
    _print(node->right);
}
int main(){

    bt ob;

    //This will be the root node
    Node* Root=new Node;
    Root->data=10;
    ob.setRoot(Root);
    
    //8 node has been created
    /*For each node you have to set it's "Value","parent","leftChild and rightChild"*/
    /* 1)Creat the root node
    2)creat some nodes
    3)set value on those nodes
    4)set the parent node
    5)set the child nodes
    */
    Node *n1=new Node;
    n1->data=1;
    Node *n2=new Node;
    n2->data=2;
    Node *n3=new Node;
    n3->data=3;
    Node *n4=new Node;
    n4->data=4;
    Node *n5=new Node;
    n5->data=5;
    Node *n6=new Node;
    n6->data=6;
    Node *n7=new Node;
    n7->data=7;
    Node *n8=new Node;
    n8->data=8;

    n1->parent=Root;
    n2->parent=Root;

    Root->left=n1;
    Root->right=n2;

    n3->parent=n1;
    n5->parent=n1;

    n1->left=n3;
    n1->right=n5;

    n3->left=NULL;
    n3->right=NULL;
    n5->left=NULL;
    n5->right=NULL;

    n4->parent=n2;
    n6->parent=n2;

    n2->left=n4;
    n2->right=n6;

    n7->parent=n4;
    n8->parent=n7;
    n4->left=n7;
    n4->right=NULL;
    n7->left=n8;
    n7->right=NULL;

    n8->left=NULL;
    n8->right=NULL;

    n6->left=NULL;
    n6->right=NULL;

    printf("Binary Tree : ");
    ob._print(Root);

    printf("\nDepth of Node 7 : %d",ob.depth(n7));
    printf("\nHeight of the Tree : %d",ob.heightRecursive(Root));
    printf("\nHeight of node 2 : %d",ob.heightRecursive(n2));
    printf("\nSize of the Tree : %d",ob.sizeRecursive(Root));

    return 0;
}