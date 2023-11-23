#include<iostream>
using namespace std;
int c=45;
int main()
{
    int a,b;
    float d=34.4;                                       //f is used to make a number a floating point literal
    long double e=34.4l;                                 //l is used to make a number a long double literal
    cout<<"enter two numbers to add"<<endl;
    cin>>a>>b;
    int c=a+b;
    cout<<"the sum is:"<<c<<endl;
    cout<<"value of global variable c="<<::c<<endl;     //:: is scope resolution operator and it is used to print global variable
    cout<<"value of d is :"<<d<<endl;
    cout<<"value of e is :"<<e<<endl;       
    cout<<"the size of floating point literal is:"<<sizeof(34.4l);            
    return 0;
}