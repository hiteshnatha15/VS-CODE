#include<iostream>
using namespace std;

int main()
{
    int binary;
    int two=1;
    int ans=0;
    cout<<"enter the binary number : ";
    cin>>binary;
    while(binary)
    {
        ans=ans+(binary%10)*two;
        binary/=10;
        two*=2;
    }
    cout<<ans;
    return 0;
}