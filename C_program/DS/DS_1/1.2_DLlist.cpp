#include <stdio.h>

struct Node
{
    int x;
    struct Node* prev;
    struct Node* next;
};

class DLList
{
private:
    int n;
    struct Node* dummy;

public:
    DLList()
    {
        n = 0;
        dummy =newNode(NULL);
        dummy->prev = dummy;
        dummy->next = dummy;
    }

    struct Node* newNode(int data)
    {
        struct Node* node=new Node;
        node->x=data;
        node->next=NULL;
        node->prev=NULL;
        return node;
    }

    struct Node* getNode(int i)
    {
        struct Node* p;
        if (i < n / 2)
        {
            p = dummy->next;
            for (int j = 0; j < i; j++)
                p = p->next;
        }
        else
        {
            p = dummy;
            for (int j = n; j > i; j--)
                p = p->prev;
        }
        return p;
    }

    int get(int i)
    {
        return getNode(i)->x;
    }

    int set(int i, int x)
    {
        struct Node* u = getNode(i);
        int y = u->x;
        u->x = x;
        return y;
    }

    struct Node* addBefore(struct Node* w, int x)
    {
        struct Node* u = new Node;
        u->x = x;
        u->prev = w->prev;
        u->next = w;
        u->next->prev = u;
        u->prev->next = u;
        n++;
        return u;
    }

    void add(int i, int x)
    {
        addBefore(getNode(i), x);
    }

    void remove(struct Node* w)
    {
        w->prev->next = w->next;
        w->next->prev = w->prev;
        n--;
        delete w;
    }

    void remove(int i)
    {
        remove(getNode(i));
    }

    void printList()
    {
        struct Node* current = dummy->next;
        while (current != dummy)
        {
            printf("%d ", current->x);
            current = current->next;
        }
        printf("\n");
    }
};

int main()
{
    DLList myList;

    // Add elements to the list
    myList.add(0, 10);   // Add 10 at index 0
    myList.add(1, 20);   // Add 20 at index 1
    myList.add(2, 30);   // Add 30 at index 2

    // Print the list
    printf("List after adding elements: ");
    myList.printList();  // Output: 10 20 30

    // Remove an element from the list
    myList.remove(1);    // Remove element at index 1

    // Print the list
    printf("List after removing an element: ");
    myList.printList();  // Output: 10 30

    // Set an element at a specific index
    myList.set(1, 40);    // Set element at index 1 to 40

    // Print the list
    printf("List after setting an element: ");
    myList.printList();  // Output: 10 40

    return 0;
}
