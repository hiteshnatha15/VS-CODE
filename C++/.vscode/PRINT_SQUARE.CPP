#include<iostream>
using namespace std;

int main()
{
    int s=5;
    int j=0;
    //Write your code here
    for(int i=1;i<=j;i++)
    {
        if(j==s)
        {
            return 0;
        }
        if(i==s)
        {
            cout<<"\n";
            i=1;
            j++;
        }
        cout<<"* ";
        
    }
}