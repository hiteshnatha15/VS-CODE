#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter first no";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    int ans=1;
    int max_size=max(a,b);
    for (int i = 2; i <=max_size; i++)
    {
        while(a%i==0 && b%i==0)
        {
            ans=ans*i;
            a=a/i;
            b=b/i;
        }
        while(a%i==0)
        {
            ans=ans*i;
            a=a/i;
        }
        while(b%i==0)
        {
            ans=ans*i;
            b=b/i;
        }
    }
    cout<<ans;
    return 0;
}