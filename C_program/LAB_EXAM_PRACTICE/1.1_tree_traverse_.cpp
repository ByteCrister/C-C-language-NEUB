#include<stdio.h>

class Node{
public:
     int x;
     Node *parent,*left,*right;
};

class tree{
public:
     int n;
     tree();
     void PreOrderRecursive(Node*);
     Node* creatTree(int a[],int *index,Node* p);

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
     node->parent=NULL;
     node->left=NULL;
     node->right=NULL;
     return node;
}

Node* tree::creatTree(int a[],int *index,Node* p)
{
     *index=*index+1;

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

int main()
{
     tree ob;

     int a[]={1,2,3,4,5},i=-1;
     int s=sizeof(a)/sizeof(a[0]);

     Node* Tree=ob.creatTree(a,&i,NULL);

     printf("\nPreOrderRecursive-> ");
     ob.PreOrderRecursive(Tree);
     printf("\n");

     return 0;
}
