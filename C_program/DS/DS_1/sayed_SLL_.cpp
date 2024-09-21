#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
};
typedef struct node node;
node* head;
node* tail;
int n;
void init(){
	n=0;
	head=NULL;
	tail=NULL;
}
node* newNode(int data){
	node* x=(node*)malloc(sizeof(node));
	x->data=data;
	x->next=NULL;
	return x;
}
void push(int data){
	node* u=newNode(data);
	if(n==0){
		head=u;
		tail=u;
	}
	else{
		u->next = head;
		head=u;
	}
	n++;
}
int pop(){
	if(n==0){
		//cant remove if no elemenet
		return 0;
	}
	int previous=head->data;
	head=head->next;
	n--;
	
	return previous;
}
int main(){

	// init();
	push(5);
	push(7);
	push(8);
	push(9);
	node* itr=head;
	while(itr!=NULL){
		printf("%d ", itr->data);
		itr=itr->next;
	}
	printf("\n");
	pop();
	// printf(" %d ", pop());
	itr=head;
	while(itr!=NULL){
		printf("%d ", itr->data);
		itr=itr->next;
	}
}