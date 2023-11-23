#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number whhich table has to be printed"<<endl;
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
        cout<<num*i<<endl;
    }
    
    return 0;
}