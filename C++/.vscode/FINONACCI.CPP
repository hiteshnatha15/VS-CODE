#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the position for fibonacci series";
    cin>>size;
    int arr[size];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=size;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        
    }
    cout<<arr[size];
    return 0;
}