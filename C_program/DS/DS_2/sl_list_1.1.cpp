#include<stdio.h>
#include<stdlib.h>
struct n{
    int x;
    struct n *next;
};

class sll{
    public:
    sll();
    void push(int data);
    int pop();
    void enqueue(int data);
    int dequeue();
    void _print_list();
    private:
    struct n *newNode(int data);
    struct n *head;
    struct n *tail;
    int N;
};

sll::sll(){
    N=0;
    head=NULL;
    tail=NULL;
}
struct n *sll::newNode(int data){
    struct n *node=new n;
    node->x=data;
    node->next=NULL;
    return node;
}

void sll::push(int data){
    struct n *u=newNode(data);
    u->next=head;
    head=u;
    if(N==0){
        tail=u;
    }
    N++;
}

int sll::pop(){
    if(N==0){
        return NULL;
    }
    int previous=head->x;
    head=head->next;
    N--;
    if(N==0){
        tail=NULL;
    }
    return previous;
}

void sll::enqueue(int data){
    struct n *u=newNode(data);
    if(N==0){
        head=u;
    }
    else{
        tail->next=u;
    }
    tail=u;
    N++;
}

int sll::dequeue(){
    return pop();
}

void sll::_print_list(){
        struct n *index=head;
        printf("[ ");
        while(index!=NULL){
            printf("%d ",index->x);
            index=index->next;
        }
        printf("]");
        printf("\n");
    }
int main()
{
    sll ob;
    int a,b,c,d,e;
     printf("\nEnter 1 for FIFO or 2 for LIFO : ");
     scanf("%d",&a);
     if(a==1){
        while(1){
       printf("\n1)[ Enqueue ]");
       printf("\n2)[ Dequeue ]");
       printf("\n3)[ Print List ]");
       printf("\n4)[ EXIXT ]");
       printf("\nEnter : ");
       scanf("%d",&b);
       switch(b){
        case 1:
        printf("\nEnqueue : ");
        scanf("%d",&c);
        ob.enqueue(c);
        break;
        case 2:
        e=ob.dequeue();
        if(e==NULL){
            printf("\n>>List underflow!<<");
        }
        else{
        printf("\nDequeue : %d",e);
        printf("\n");
        }
        break;
        case 3:
        printf("\nSingly link list : ");
        ob._print_list();
        break;
        case 4:
        printf("\nExit!\n");
        exit(1);
        break;
        default:
        printf("\nWrong choice!!\n");
       }

    }
     }
     else if(a==2){
        while(1){
       printf("\n1)[ Push ]");
       printf("\n2)[ Pop ]");
       printf("\n3)[ Print List ]");
       printf("\n4)[ EXIXT ]");
       printf("\nEnter : ");
       scanf("%d",&b);
       switch(b){
        case 1:
        printf("\nPush : ");
        scanf("%d",&c);
        ob.push(c);
        break;
        case 2:
         d=ob.pop();
        if(d==NULL){
            printf("\n>>List underflow!<<");
        }
        else{
        printf("\nPopped : %d",d);
        printf("\n");
        }
        break;
        case 3:
        printf("\nSingly link list : ");
        ob._print_list();
        break;
        case 4:
        printf("\nExit!\n");
        exit(1);
        break;
        default:
        printf("\nWrong choice!!\n");
       }
        }
     }
     else{
        printf("\n You have entered wrong one!!\n");
     }


    return 0;
}
