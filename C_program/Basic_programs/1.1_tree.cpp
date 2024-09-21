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
    tree();
    int n;
    Node* creatTree(int[],int*,Node*);
    void PreOrderRecursive(Node*);
    void InOrderRecursive(Node*);
    void PostOrderRecursive(Node*);
    void InOrderIterative();
    void PreOrderIterative();
    void PostOrderIterative();

private:
    Node* newNode(int);
    Node* root;
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
    node->parent=NULL;
    node->left=NULL;
    node->right=NULL;
    return node;
}

Node* tree::creatTree(int a[],int *index,Node* p)
{
    *index=*index+1;

    if(a[*index]==-1)
        return NULL;

    Node* u=newNode(a[*index]);
    n++;

    if(*index==0)
        root=u;

    u->parent=p;
    u->left=creatTree(a,index,u);
    u->right=creatTree(a,index,u);

    return u;
}

void tree::PreOrderRecursive(Node* u)
{
    if(u==NULL)
        return;
    printf("%d ",u->x);
    PreOrderRecursive(u->left);
    PreOrderRecursive(u->right);
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

void tree::PreOrderIterative()
{
    Node *u=root,*prev=NULL,*next;

    while(u!=NULL)
    {
        if(prev==u->parent)
        {
            printf("%d ",u->x);
            if(u->left!=NULL)
            {
                next=u->left;
            }
            else if(u->right!=NULL)
            {
                next=u->right;
            }
            else
                next=u->parent;
        }

        else if(prev==u->left)
        {
            if(u->right!=NULL)
            {
                next=u->right;
            }
            else
                next=u->parent;
        }
        else
            next=u->parent;

        prev=u;
        u=next;
    }
}

void tree::InOrderIterative()
{
    Node *u=root,*prev=NULL,*next;

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
                {
                    next=u->right;
                }
                else
                    next=u->parent;
            }
        }

        else if(prev==u->left)
        {
            printf("%d ",u->x);
            if(u->right!=NULL)
            {
                next=u->right;
            }
            else
                next=u->parent;
        }
        else
            next=u->parent;

        prev=u;
        u=next;
    }
}

void tree::PostOrderIterative()
{
    Node *u=root,*prev=NULL,*next;

    while(u!=NULL)
    {
        if(prev==u->parent)
        {
            if(u->left!=NULL)
            {
                next=u->left;
            }
            else if(u->right!=NULL)
            {
                next=u->right;
            }
            else
            {
                printf("%d ",u->x);
                next=u->parent;
            }
        }

        else if(prev==u->left)
        {
            if(u->right!=NULL)
            {
                next=u->right;
            }
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
     int ar[]={1,2,4,-1,10,12,-1,-1,-1,5,-1,-1,3,-1,6,7,8,-1,9,-1,-1,-1,-1},i=-1;

     Node* r=ob.creatTree(ar,&i,NULL);

     printf("\nNode : %d",ob.n);

     printf("\nPreorderRecursive-> ");
     ob.PreOrderRecursive(r);

     printf("\nInorderRecursive-> ");
     ob.InOrderRecursive(r);

     printf("\nPostorderRecursive-> ");
     ob.PostOrderRecursive(r);

     printf("\n\n");

     printf("\nPreorderIterative-> ");
     ob.PreOrderIterative();

     printf("\nInorderIterative-> ");
     ob.InOrderIterative();

     printf("\nPostorderIterative-> ");
     ob.PostOrderIterative();

    return 0;
}
