#include<stdio.h>
class sl_list{

public:
     int data;
     sl_list *next;
};

class sl{
public:
     sl();
     void push(int x);
     void enq(int x);
     int pop();
     int deq();
     void print();

private:
     int n;
     sl_list *newSl(int x);
     sl_list *head;
     sl_list *tail;

};

sl::sl()
{
     n=0;
     head=NULL;
     tail=NULL;
}
sl_list *sl::newSl(int x)
{
     sl_list *v=new sl_list;
     v->data=x;
     v->next=NULL;
     return v;

}
void sl::push(int x)
{
     sl_list *value=newSl(x);
     value->next=head->next;
     head=value;
     if(n==0)
          tail=value;
     n++;

}
int sl::pop(){
     if(n==0)
          return 0;
     int prev=head->data;
     head=head->next;
     n--;
     if(n==0)
          tail=NULL;
}
void sl::enq(int x)
{
     sl_list *u=newSl(x);
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
     sl_list *index=head;
     while(index!=NULL)
     {
          printf("->%d",index->data);
          index=index->next;
     }
}
int main()
{
     sl ob;
     ob.push(1);
     ob.push(1);
     ob.push(1);
     ob.push(1);
     ob.push(1);
     ob.print();

     return 0;
}
