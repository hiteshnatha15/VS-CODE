#include<iostream>
using namespace std;

int main()
{
    int n;
    int ans=1;
    cout<<"enter n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans=ans*n;
    }
    cout<<"value of ans is "<<ans;
    
}