#include<iostream>
using namespace std;

int main()
{
    int i=2;
    int no;
    cout<<"Enter the prime no";
    cin>>no;
    if(no<2)
    {
        cout<<"number not prime";
    }
    for(i;i<no;i++)
    {
        if(no%i==0)
        {
            cout<<"number is not prime";
            break;
        }
    }
    if(i==no)
    {
        cout<<"number is prime";
    }
    return 0;
}