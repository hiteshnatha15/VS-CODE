#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number to print:";
    cin>>num;
    for (int i = 0; i <= num; i++)   
    {
        cout<<i<<endl;
    }

    int j=1;
    while(num>=j)
    {
       cout<<j<<endl;
       j++;
    }
    
    int k=1;
    do
    {
        cout<<k<<endl;
        k++;
    } 
     while (num>=k);
    
    return 0;
}