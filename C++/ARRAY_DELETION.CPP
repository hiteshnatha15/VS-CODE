#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position of element to be deleted: ";
    int pos;
    cin>>pos;
    if(pos>n||pos<0)
    {
        cout<<"INVALID POSITION ENTERED.";
        return 0;
    }   
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}