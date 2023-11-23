#include<iostream>
using namespace std;
int sum(int a,int b)
    {
        int c=a+b;
        return c;
    }
int swap(int a,int b)
    {
        int temp=a;
        a=b;
        b=temp;
        return a,b;
    }
int swappointer(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
int swapPointerReference(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
int main()
{
    int a=5,b=4;
    cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl;
    swap(a,b);
    cout<<"the value at a is "<< a<<" and b is "<<b<<endl;
    swappointer(&a,&b);
    cout<<"the value at a is "<< a<<" and b is "<<b<<endl;
    swapPointerReference(a,b);
    cout<<"the value at a is "<< a<<" and b is "<<b;
    return 0;
}