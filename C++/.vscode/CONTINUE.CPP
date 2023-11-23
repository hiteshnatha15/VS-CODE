#include<iostream>
using namespace std;

int main()
{
    int a=0,b=0;
    int i=1;
    cout<<"enter first number ";
    cin>>a;
    cout<<"enter second number ";
    cin>>b;
   while(i<a)
   {
    if(i==1)
    {
        cout<<"1 ";
    }
    i++;
    if (i%b==0)
    {
        continue;
    }
    cout<<i<<" ";
   }
    return 0;
}