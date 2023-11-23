#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n-1];
    cout<<"enter array elements";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max)
        {
            smax=arr[i];
        }
    }
    
    cout<<"the second largest element is "<<smax;
    return 0;
}