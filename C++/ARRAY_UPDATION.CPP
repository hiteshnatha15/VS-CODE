#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position of the element to be updated: ";
    int pos;
    cin>>pos;
    cout<<"Enter the value to be updated: ";
    if(pos>n||pos<0)
    {
        cout<<"INVALID POSITION ENTERED.";
        return 0;
    }
    int value;
    cin>>value;
    arr[pos-1]=value;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}