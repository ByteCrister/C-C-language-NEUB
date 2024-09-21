#include<stdio.h>

struct fun
{
    int i;
    int L;
    int ary[];

};

//input funtion
void input(struct fun *loc)
{
    loc->L=8;
    loc->ary[loc->L];

    for(loc->i=0; loc->i<loc->L; loc->i++)
    {
        printf("Array[%d]->",loc->i);
        scanf("%d",&loc->ary[loc->i]);

        if(loc->ary[loc->i]<0)
            break;
    }
}

//**Resize operation implementation**
/*void reSize(int *ary,int *L)
{
     int j=*L;
     j*=2;
    //*L=j;
    int ar[j];
    *ary=ar;
    for(int i=0; i<*L/2; i++)
    {
        *(ary+i)=*(ary+i);
    }

}

/*get function's implementation*/
/*int get(int i)
{
     for(loc->i=0; loc->i<loc->L; loc->i++)
    {

        if(loc->ary[loc->i]==i)
          return loc->ary[loc->i];
            break;
    }
}*/

int main()
{
    //for input
    struct fun loc;
    input(&loc);

    /*get function call
    int R=get(0);
    printf("\n %d got from index %d",0,R)*/

    return 0;
}
