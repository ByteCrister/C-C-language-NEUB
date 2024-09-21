#include<stdio.h>

class Node
{
public:
    int x;
    Node* parent;
    Node* left;
    Node* right;
};

class Tree
{
public:
    int n;
    Node* root;
    Tree();
    Node* creatTree(int ar[],int *index,Node* p);
    Node* newNode(int);
    void PreOrderRecursive(Node*);
    void InOrderRecursive(Node*);
    void PostOrderRecursive(Node*);
    void PreOrderIterative();
    void InOrderIterative();
    void PostOrderIterative();
};

Tree::Tree()
{
    n=0;
    root=NULL;
}

Node* Tree::newNode(int data)
{
    Node* node=new Node;
    node->x=data;
    node->parent=NULL;
    node->left=NULL;
    node->right=NULL;
    return node;
}

Node* Tree::creatTree(int ar[],int *index,Node* p)
{

    *index=*index+1;

    if(ar[*index]==-1)
        return NULL;

    Node* u=newNode(ar[*index]);
    n++;

    if(*index==0)
        root=u;

    u->parent=p;

    u->left=creatTree(ar,index,u);
    u->right=creatTree(ar,index,u);

    return u;
}

void Tree::PreOrderRecursive(Node* u)
{
    if(u==NULL)
        return;

    printf("%d ",u->x);
    PreOrderRecursive(u->left);
    PreOrderRecursive(u->right);
}

void Tree::InOrderRecursive(Node* u)
{
    if(u==NULL)
        return;

    InOrderRecursive(u->left);
    printf("%d ",u->x);
    InOrderRecursive(u->right);
}

void Tree::PostOrderRecursive(Node* u)
{
    if(u==NULL)
        return;

    PostOrderRecursive(u->left);
    PostOrderRecursive(u->right);
    printf("%d ",u->x);
}

void Tree::PreOrderIterative()
{
    Node* u=root;
    Node* prev=NULL;
    Node* next;

    while(u!=NULL)
    {
        if(prev==u->parent)
        {
            printf("%d ",u->x);

            if(u->left!=NULL)
                next=u->left;

            else if(u->right!=NULL)
                next=u->right;

            else
                next=u->parent;
        }
        else if(prev==u->left)
        {

            if(u->right!=NULL)
                next=u->right;

            else
                next=u->parent;
        }
        else
            next=u->parent;

        prev=u;
        u=next;
    }
}

void Tree::InOrderIterative()
{
    Node* u=root;
    Node* prev=NULL;
    Node* next;

    while(u!=NULL)
    {
        if(prev==u->parent)
        {
            if(u->left!=NULL)
            {
                next=u->left;
            }
            else
            {
                printf("%d ",u->x);

                if(u->right!=NULL)
                    next=u->right;

                else
                    next=u->parent;
            }

        }
        else if(prev==u->left)
        {
            printf("%d ",u->x);

            if(u->right!=NULL)
                next=u->right;

            else
                next=u->parent;
        }
        else
            next=u->parent;

        prev=u;
        u=next;
    }
}

void Tree::PostOrderIterative()
{
    Node* u=root;
    Node* prev=NULL;
    Node* next;

    while(u!=NULL)
    {
        if(prev==u->parent)
        {
            if(u->left!=NULL)
                next=u->left;

            else if(u->right!=NULL)
                next=u->right;

            else
            {
                printf("%d ",u->x);
                next=u->parent;
            }
        }
        else if(prev==u->left)
        {
            if(u->right!=NULL)
                next=u->right;

            else
            {
                printf("%d ",u->x);
                next=u->parent;
            }
        }
        else
        {
            printf("%d ",u->x);
            next=u->parent;
        }
        prev=u;
        u=next;
    }
}
int main()
{

    Tree ob;
    int a[]= {1,2,4,-1,10,12,-1,-1,-1,5,-1,-1,3,-1,6,7,8,-1,9,-1,-1,-1,-1},index=-1;

    Node* r=ob.creatTree(a,&index,NULL);

    printf("The root node -> %d",r->x);

    printf("\nNumber nodes-> %d",ob.n);

    printf("\nPreOrderRecursive : ");
    ob.PreOrderRecursive(r);

    printf("\nInOrderRecursive : ");
    ob.InOrderRecursive(r);

    printf("\nPostOrderRecursive : ");
    ob.PostOrderRecursive(r);

    printf("\n\n");

    printf("\nPreOrderIteration : ");
    ob.PreOrderIterative();

    printf("\nInOrderIteration : ");
    ob.InOrderIterative();

    printf("\nPostOrderIteration : ");
    ob.PostOrderIterative();


    return 0;
}
