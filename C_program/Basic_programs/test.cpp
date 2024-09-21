#include <stdio.h>

class treeNode
{
public:
    int x;
    treeNode* parent;
    treeNode* left;
    treeNode* right;
};

class binaryTree
{
public:
    int n;
    treeNode* r;
    binaryTree();
    treeNode* newNode(int);
    treeNode* buildT_NegBased(int[],int*,treeNode*);

    void preorderRecursive(treeNode*);
    void inorderRecursive(treeNode*);
    void postorderRecursive(treeNode*);
};

binaryTree::binaryTree()
{
    r = NULL;
    n = 0;
}

treeNode* binaryTree::newNode(int data)
{
    treeNode* node =new treeNode();
    node->x = data;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    return node;
}

treeNode* binaryTree::buildT_NegBased(int arr[],int *currentIndex,treeNode *p)
{
    *currentIndex = *currentIndex + 1;
    if(arr[*currentIndex] == -1)
        return NULL;
    treeNode* u = newNode(arr[*currentIndex]);
    n++;
    if(*currentIndex == 0)
        r = u;
    u->parent = p;
    u->left = buildT_NegBased(arr,currentIndex,u);

    u->right = buildT_NegBased(arr,currentIndex,u);
    return u;
}

void binaryTree::preorderRecursive(treeNode* u)
{
    if (u == NULL)
        return;

    printf("%d ",u->x);
    preorderRecursive(u->left);
    preorderRecursive(u->right);
}

void binaryTree::inorderRecursive(treeNode* u)
{
    if (u == NULL)
        return;

    inorderRecursive(u->left);
    printf("%d ",u->x);
    inorderRecursive(u->right);
}

void binaryTree::postorderRecursive(treeNode* u)
{
    if (u == NULL)
        return;

    postorderRecursive(u->left);
    postorderRecursive(u->right);
    printf("%d ",u->x);
}


int main()
{
    binaryTree ob;

    int arr[]= {1,2,4,-1,7,-1,-1,-1,3,5,-1,-1,6,8,-1,10,-1,-1,9,-1,-1};

    int currentIndex = -1;
    printf("Building tree...\n");


    treeNode *r = ob.buildT_NegBased(arr, &currentIndex, NULL);
    printf("The tree was build successfully with number of nodes = %d\n", ob.n);
    printf("The root of the tree is: %d\n\n", r->x);

    //Tree Traversal
    printf("Preorder Traversal: ");
    ob.preorderRecursive(r);

    printf("\nInorder Traversal: ");
    ob.inorderRecursive(r);

    printf("\nPostorder Traversal: ");
    ob.postorderRecursive(r);

}
