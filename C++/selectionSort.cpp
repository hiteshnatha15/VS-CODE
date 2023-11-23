#include<iostream>
using namespace std;

void SelectionSort()
{
    int arr[10]={46,8,41,4,2,89,1,78,7,5};
    int minIndex;
    for(int i=0;i<9;i++)
    {
        minIndex=i;
        for(int j=i+1;j<10;j++)
        {
        if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    SelectionSort();
    return 0;
}