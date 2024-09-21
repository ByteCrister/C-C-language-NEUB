#include<stdio.h>
class Node
{
public:
    int data;
    Node* parent;
    Node* left;
    Node* right;
};
class BT
{
public:
    BT();
    int Depth(Node*);
    int heightRecursive(Node*);
    int sizeRecursive(Node*);
    void setRoot(Node*);
    void _printTree(Node*);

private:
    Node* root;
};

BT::BT()
{
    root=NULL;
}
void BT::setRoot(Node* u)
{
    root=u;
}

int BT::Depth(Node* u)
{
    int depth=0;
    while(u!=root)
    {
        u=u->parent;
        depth++;
    }
    return depth;
}

int BT::heightRecursive(Node* u)
{
    if(u==NULL)
        return 0;
    int leftHeight=heightRecursive(u->left);
    int rightHeight=heightRecursive(u->right);
    int maxHeight;
    if(leftHeight>rightHeight)
    {
        maxHeight=leftHeight;
    }
    else
    {
        maxHeight=rightHeight;
    }

    return 1+maxHeight;
}

int BT::sizeRecursive(Node* u)
{
    if(u==NULL)
        return 0;
    return 1+sizeRecursive(u->left)+sizeRecursive(u->right);
}

void BT::_printTree(Node* value)
{
     if(value==NULL){
          return;
     }
    _printTree(value->left);
    printf("%d ",value->data);
    _printTree(value->right);

}
int main()
{
     BT ob;
     Node* root=new Node;
     root->data=10;

     Node* n1=new Node;
     n1->data=8;
     Node* n2=new Node;
     n2->data=20;
     Node* n3=new Node;
     n3->data=5;
     Node* n4=new Node;
     n4->data=9;


     root->left=n1;
     root->right=n2;

     n1->left=n3;
     n1->right=n4;


     n1->parent=root;
     n2->parent=root;


     n3->parent=n1;
     n4->parent=n1;


     n2->left=NULL;
     n2->right=NULL;

     n3->left=NULL;
     n3->right=NULL;

     n4->left=NULL;
     n4->right=NULL;

     ob.setRoot(root);

     printf("The BinaryTree-> ");
     ob._printTree(root);

     printf("\nDepth of root: %d",ob.Depth(root));
     printf("\nDepth of n1: %d",ob.Depth(n1));
     printf("\n");

     printf("\nHeight of root: %d",ob.heightRecursive(root));

     printf("\nSize of tree : %d",ob.sizeRecursive(root));


    return 0;
}
