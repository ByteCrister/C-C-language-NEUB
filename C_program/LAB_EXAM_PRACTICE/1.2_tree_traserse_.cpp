#include<stdio.h>

class Node
{
public:
    int x;
    Node *left,*right,*parent;
};

class tree
{
public:
    int n;
    tree();
    void InOrderRecursive(Node*);
    void PostOrderRecursive(Node*);
    void PreOrderRecursive(Node*);
    void inorderiterative();
    void postorderiterative();
    void preorderiterative();
    Node* creatTree(int a[],int *index,int size,Node* p);

private:
    Node* root;
    Node* newNode(int);
};

tree::tree()
{
    n=0;
    root=NULL;
}

Node* tree::newNode(int data)
{
    Node* node=new Node;
    node->x=data;
    node->left=NULL;
    node->right=NULL;
    node->parent=NULL;
    return node;
}

Node* tree::creatTree(int a[],int *index,int size,Node* p)
{
    if((*index)>=size)
        return NULL;

    Node* u=newNode(a[*index]);
    n++;

    if(*index==0)
        root=u;

    u->parent=p;


    (*index)++;
    u->left=creatTree(a,index,size,u);

    (*index)++;
    u->right=creatTree(a,index,size,u);


    return u;

}

void tree::InOrderRecursive(Node* u)
{
    if(u==NULL)
        return;
    InOrderRecursive(u->left);
    printf("%d ",u->x);
    InOrderRecursive(u->right);
}

void tree::PostOrderRecursive(Node* u)
{
    if(u==NULL)
        return;
    PostOrderRecursive(u->left);
    PostOrderRecursive(u->right);
    printf("%d ",u->x);
}

void tree::PreOrderRecursive(Node* u)
{
    if(u==NULL)
        return ;
    printf("%d ",u->x);
    PreOrderRecursive(u->left);
    PreOrderRecursive(u->right);
}

void tree::preorderiterative()
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

void tree::inorderiterative()
{
    Node *u=root,*prev=NULL,*next;

    while(u!=NULL)
    {
        if(prev==u->parent)
        {
            if(u->left!=NULL)
                next=u->left;
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

void tree::postorderiterative()
{
    Node *u=root,*prev=NULL,*next;

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
    tree ob;
    int a[]= {1,2,3,4,5},i=0;
    int s=sizeof(a)/sizeof(a[0]);

    Node* Tree=ob.creatTree(a,&i,s,NULL);

    printf("\nNumber of Nodes : %d",ob.n);

    printf("\nInorderRecursive-> ");

    ob.InOrderRecursive(Tree);

    printf("\nPreorderRecursive-> ");
    ob.PreOrderRecursive(Tree);

    printf("\nPostorderRecursive-> ");
    ob.PostOrderRecursive(Tree);

    printf("\nPreorderIterative-> ");
    ob.preorderiterative();

    printf("\nInorderIterative-> ");
    ob.inorderiterative();

    printf("\nPostorderIterative-> ");
    ob.postorderiterative();

    return 0;
}
