#include<stdio.h>

class Node{
public:
     int x;
     Node *next;
};

class sl{
public:
     sl();
     void push(int);
     int pop();
     void enq(int);
     int deq();
     void print();

private:
     int n;
     Node *head,*tail;
     Node *newNode(int);
};

sl::sl()
{
     n=0;
     head=tail=NULL;
}

Node* sl::newNode(int data)
{
     Node* node=new Node;
     node->x=data;
     node->next=NULL;
     return node;
}

void sl::push(int data)
{
     Node *u=newNode(data);
     u->next=head;
     head=u;

     if(n==0)
          tail=u;
     n++;
}

int sl::pop()
{
     if(n==0)
          return NULL;

     int previous=head->x;
     head=head->next;
     n--;

     if(n==0)
          tail=NULL;
     return previous;
}

void sl::enq(int data)
{
     Node* u=newNode(data);
     if(n==0)
          head=u;
     else
          tail->next=u;
     tail=u;
     n++;
}

int sl::deq()
{
     return pop();
}

void sl::print()
{
     Node* index=head;
     printf("[ ");
     while(index!=NULL)
     {
          printf("%d ",index->x);
          index=index->next;
     }
     printf("]");
     printf("\n");
}
int main()
{
     sl ob;

     ob.print();

     ob.push(1);
     ob.push(2);
     ob.push(3);
     ob.push(4);
     ob.push(5);
     ob.push(6);

     ob.print();

     printf("\nPopes-> %d :",ob.pop());
     ob.print();

     printf("\nPopes-> %d :",ob.pop());
     ob.print();

     printf("\nPopes-> %d :",ob.pop());
     ob.print();

     printf("\nPopes-> %d :",ob.pop());
     ob.print();

     printf("\nPopes-> %d :",ob.pop());
     ob.print();

     printf("\nPopes-> %d :",ob.pop());
     ob.print();

     ob.enq(1);
     ob.enq(2);
     ob.enq(3);
     ob.enq(4);
     ob.enq(5);
     ob.enq(6);
     ob.enq(7);

     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();

     printf("\nDequeue-> %d : ",ob.deq());
     ob.print();


     return 0;
}
