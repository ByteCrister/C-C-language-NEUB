#include<stdio.h>
#include<stdlib.h>

struct stack
{

    int size;
    int top;
    int *ar;

};
int isEmpty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(struct stack* pr)
{
    if(pr->size==pr->top)
    {
        return 1;
    }
    else
        return 0;
}
void push(struct stack* prr,int value)
{
    if(isFull(prr))
    {
        printf("\nStack overflow ! Cannot push %d to the stack\n",value);
    }
    else
    {
        prr->top++;
        prr->ar[prr->top]=value;
        printf("\nPush(%d)",prr->ar[prr->top]);
    }
}
int pop(struct stack* prr)
{
    if(isEmpty(prr))
    {
        printf("\nStack underflow ! Cannot pop from the stack\n");
    }
    else
    {
        int value=prr->ar[prr->top];
        prr->top--;
        printf("\nPop(%d)\n",value);
        return value;
    }
}
int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=8;
    sp->top=-1;
    sp->ar=(int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created \n\n");

    printf("Before pushing, Full: %d\n",isFull(sp));
    printf("Before pushing, Empty: %d\n\n",isEmpty(sp));

    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,6);
    push(sp,7);
    push(sp,8);
    push(sp,9);
    //push(sp,10);


    printf("\nAfter pushing, Full: %d\n",isFull(sp));
    printf("After pushing,Empty: %d\n\n",isEmpty(sp));


    printf("Pooped %d from the stack\n",pop(sp));

    return 0;
}
