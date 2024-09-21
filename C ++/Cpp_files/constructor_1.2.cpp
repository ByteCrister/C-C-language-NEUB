#include<stdio.h>
class student{

public:
     student(int x,int b)  // parameterize constructor
     {
          id=x;
          mark=b;
     }
     int id,mark;

     void idMark()
     {
          printf("\nId : %d ,Mark : %d",id,mark);
     }

     student()
     {
          printf("\n\nThis is default constructor");
     }

};
int main()
{
     student joy(43,88),hridoy(69,78); // This will call the parameterize constructor

     joy.idMark();
     hridoy.idMark();

     student object;  //This will call the default constructor

     return 0;
}
