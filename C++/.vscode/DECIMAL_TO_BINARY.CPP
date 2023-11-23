#include<iostream>
using namespace std;

int main()
{
    int ans=0;
    int ten=1;
    int decimal;
    cout<<"enter the decimal number";
    cin>>decimal;
    while(decimal)
    {
        ans=ans+(decimal%2)*ten;
        decimal/=2;
        ten*=10;
    }
    cout<<ans;
    return 0;
}