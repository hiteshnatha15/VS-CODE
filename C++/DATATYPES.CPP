#include<iostream>
using namespace std;

void sum(int a,int b)
    {
        int c=a+b;
        cout<<"sum is:"<<c;
    }

int main()
    {
        int a=4;
        int b=5;
        cout<<"HERE VALUE OF: \n A="<<a<<" \t B="<<b<<endl;
        sum(a,b);
        return 0;
    }