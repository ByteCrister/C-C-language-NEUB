#include<stdio.h>
int size;
int _index;

void _selection_sort(int a[])
{
    int _index,k;
    for(int i=0; i<size-1; i++){
        _index=i;
        for(int j=i+1; j<size; j++){
            if(a[_index]>a[j]){
                _index=j;
            }
            if(_index!=i){
                int temp=a[i];
                a[i]=a[_index];
                a[_index]=temp;
            }
        }
    }
}

int main()
{
    printf("\nEnter integer number's ___>\n");
    printf("Enter N : ");
    scanf("%d",&size);
    int a[size];
  for(int i=0; i<size; i++)
  {
    printf("Arrray[%d]->",i);
    scanf("%d",&a[i]);
  }
  printf("\nUnsorted Array-> ");
  for(int i=0; i<size; i++)
  {
    printf("%d ",a[i]);
  }
    _selection_sort(a);

    printf("\nSorted Array-> ");
  for(int i=0; i<size; i++)
  {
    printf("%d ",a[i]);
  }

    return 0;
}