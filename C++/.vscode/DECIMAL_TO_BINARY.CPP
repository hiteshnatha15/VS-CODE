#include<iostream>
using namespace std;

int main()
{
    long long ans=0;
    long long ten=1;
    long long decimal;
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