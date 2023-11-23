#include<iostream>
using namespace std;

void InsertionSort()
{
    int temp;
    int arr[10]={2,56,4,8,42,66,14,28,6,1};

    for(int i=1;i<10;i++)
    {
       int temp=arr[i];
       int j=i-1;
       while(j>=0 && temp<arr[j])
       {
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=temp;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    InsertionSort();
    return 0;
}