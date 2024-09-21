#include<stdio.h>

class Node{
public:
     int x;
     Node* parent;
     Node* left;
     Node* right;
};

class Tree{
public:
     int n;
     Tree();
     void PreRe(Node*);
     void InRe(Node*);
     void PosRe(Node*);
     void PreIt();
     void InIt();
     void PosIt();
     Node* creatTree(int a[],int *index,Node* p);
     Node* root;
     Node* newNode(int);

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

Node* Tree::creatTree(int a[],int *index,Node* p)
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

void Tree::PreRe(Node* u)
{
     if(u==NULL)
          return;

     printf("%d ",u->x);
     PreRe(u->left);
     PreRe(u->right);
}
int main()
{
     Tree ob;

     int a[]={1,2,3,4},index=-1;

     Node* r=ob.creatTree(a,&index,NULL);
     ob.PreRe(r);

     return 0;
}
