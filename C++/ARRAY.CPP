#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
        {   
            cin>>arr[i];
        }
    for (int j = 0; j < size; j++)
        {
            cout<<"the "<<j<<" element is : "<<arr[j]<<endl;
        }
//using while loop
    int k=0;
    while (k<size)
        {
            cout<<"the "<<k<<" element is : "<<arr[k]<<endl;
            k++;
        
        }
//using do-while loop
    int l=0;
    do
        {
            cout<<"the "<<l<<" element is : "<<arr[l]<<endl;
            l++;
        } 
    while (l<size);
    return 0;
    
}