#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"enter the number for smallest divisor";
    cin>>no;
    for(int i=2;i<=no;i++)
    {
        if(no%i==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}