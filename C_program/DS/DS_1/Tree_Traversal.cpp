#include <stdio.h>

class treeNode {
public:
    int x;
    treeNode* parent;
    treeNode* left;
    treeNode* right;
};

class binaryTree {
public:
    // Variables
    treeNode* r;    // Root of the tree
    int n;          // Number of nodes in the tree

    // Regular Methods
    binaryTree();
    treeNode* newNode(int);
    treeNode* buildT_NegBased(int[], int*, treeNode*);

    // Traversal Methods
    void preorderRecursive(treeNode*);
    void inorderRecursive(treeNode*);
    void postorderRecursive(treeNode*);
    void preorderIterative();       // Always traverse from root
    void inorderIterative();
    void postorderIterative();
};

/******************************
* Regular Methods
*******************************/

binaryTree::binaryTree() {
    r = NULL;
    n = 0;
}

treeNode* binaryTree::newNode(int data) {
    treeNode* node = new treeNode();
    node->x = data;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    return node;
}

treeNode* binaryTree::buildT_NegBased(int arr[], int* currentIndex, treeNode* p) {

    *currentIndex = *currentIndex + 1;

    if (arr[*currentIndex] == -1)
        return NULL;

    treeNode* u = newNode(arr[*currentIndex]);
    n = n + 1;

    if (*currentIndex == 0)
        r = u;

    u->parent = p;
    u->left = buildT_NegBased(arr, currentIndex, u);
    u->right = buildT_NegBased(arr, currentIndex, u);
    return u;
}

/******************************
* Traversal Methods
*******************************/

void binaryTree::preorderRecursive(treeNode* u) {
    if (u == NULL)
        return;
    printf("%d ", u->x);
    preorderRecursive(u->left);
    preorderRecursive(u->right);
}

void binaryTree::inorderRecursive(treeNode* u) {
    if (u == NULL)
        return;
    inorderRecursive(u->left);
    printf("%d ", u->x);
    inorderRecursive(u->right);
}

void binaryTree::postorderRecursive(treeNode* u) {
    if (u == NULL)
        return;
    postorderRecursive(u->left);
    postorderRecursive(u->right);
    printf("%d ", u->x);
}

void binaryTree::preorderIterative() {
    treeNode* u = r;
    treeNode* prev = NULL;
    treeNode* next;

    while (u != NULL) {
        if (prev == u->parent) {
            printf("%d ", u->x);
            if (u->left != NULL)
                next = u->left;
            else if (u->right != NULL)
                next = u->right;
            else
                next = u->parent;
        }
        else if (prev == u->left) {
            if (u->right != NULL)
                next = u->right;
            else
                next = u->parent;
        }
        else
            next = u->parent;

        prev = u;
        u = next;
    }
}

void binaryTree::inorderIterative() {
    if (r == NULL)
        return;

    treeNode* curr = r;
    treeNode* prev = NULL;
    treeNode* next;

    while (curr != NULL) {
        if (prev == curr->parent) {
            if (curr->left != NULL) {
                next = curr->left;
            }
            else {
                printf("%d ", curr->x);
                if (curr->right != NULL)
                    next = curr->right;
                else
                    next = curr->parent;
            }
        }
        else if (prev == curr->left) {
            printf("%d ", curr->x);
            if (curr->right != NULL)
                next = curr->right;
            else
                next = curr->parent;
        }
        else {
            next = curr->parent;
        }

        prev = curr;
        curr = next;
    }
}


void binaryTree::postorderIterative() {
    if (r == NULL)
        return;

    treeNode* curr = r;
    treeNode* prev = NULL;
    treeNode* next;

    while (curr != NULL) {
        if (prev == curr->parent) {
            if (curr->left != NULL) {
                next = curr->left;
            }
            else if (curr->right != NULL)
             {
                    next = curr->right;
                }

                else {
                    printf("%d ", curr->x);
                    next = curr->parent;
                }
            }
        
        else if (prev == curr->left)
         {
            if (curr->right != NULL) {
                next = curr->right;
            }
            else {
                printf("%d ", curr->x);
                next = curr->parent;
            }
        }
        else 
        {
            printf("%d ", curr->x);
            next = curr->parent;
        }

        prev = curr;
        curr = next;
    }
}

/******************************
* main
*******************************/

int main() {
    binaryTree ob;

    // This is the tree we had seen in our class (Slide-11)
    int arr[] = { 1, 2, 4, -1, 7, -1, -1, -1,
                    3, 5, -1, -1, 6, 8, -1, 10, -1, -1, 9, -1, -1 };

    int currentIndex = -1;
    printf("Building the tree...\n");
    treeNode* r = ob.buildT_NegBased(arr, &currentIndex, NULL);
    printf("The tree was built successfully with the number of nodes = %d\n", ob.n);
    printf("The root of the tree is: %d\n\n", r->x);

    printf("Preorder Traversal: ");
    ob.preorderRecursive(r);

    printf("\nInorder Traversal: ");
    ob.inorderRecursive(r);

    printf("\nPostorder Traversal: ");
    ob.postorderRecursive(r);

    printf("\nPreorder Traversal (Iterative): ");
    ob.preorderIterative();

    printf("\nInorder Traversal (Iterative): ");
    ob.inorderIterative();

    printf("\nPostorder Traversal (Iterative): ");
    ob.postorderIterative();

    printf("\n\n");

    return 0;
}
