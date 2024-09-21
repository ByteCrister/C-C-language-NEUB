#include <stdio.h>
#include <iostream>

using namespace std;

int Sort(int ar[], int low, int high)
{
    int i = low;
    int j = high + 1;
    int pivot = ar[low];

    if (i < j)
    {
        do
        {
            i++;
        } while (pivot >= ar[i]);

        do
        {
            j--;
        } while (pivot < ar[j]);
        if(i<j){
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        }
    }
    int temp = ar[low];
    ar[low] = ar[j];
    ar[j] = temp;

    return j;
}

void QuickSort(int ar[], int low, int high)
{
    if (low < high)
    {
        int partition = Sort(ar, low, high);
        QuickSort(ar, low, partition);
        QuickSort(ar, partition + 1, high);
    }
}
int main()
{
    int ar[] = {6, 1, 8, 2, 5, 0, 9};

    for (int i = 0; i < 7; i++)
    {
        cout << " " << ar[i];
    }
    QuickSort(ar, 0, 6);
    cout << " " << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << " " << ar[i];
    }

    return 0;
}