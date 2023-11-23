#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter the position for the element to be entered:";
    cin>>pos;
    if (pos>n+1||pos<0)        
    {
        cout<<"INVALID POSITION ENTERED";
        return 0;
    }
    int element;
    cout<<"Enter the element to be entered:";
    cin>>element;
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element;
    for (int i = 0; i < n+1; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}