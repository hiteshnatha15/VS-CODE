#include<iostream>
using namespace std;

void binarySort(int item)
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int mid=0;
    int lb=0;
    int ub=9;

    while(ub>=lb)
    {
        mid=(ub+lb)/2;
        if(arr[mid]==item)
        {
            cout<<"item found at "<<mid<<" position";
            return;
        }
        else if(item>arr[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }

    }
}
int main()
{
    int value;
    cout<<"enter the item you want to search";
    cin>>value;
    binarySort(value);
    return 0;
}