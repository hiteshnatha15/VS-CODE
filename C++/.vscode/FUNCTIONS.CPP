#include<iostream>
using namespace std;

//function prototype----->we have to declare the function before main function if we define the function after the main function

int sum(int,int);
int main()
{
    int num1,num2;
    cout<<"enter the first number to add"<<endl;
    cin>>num1;
    cout<<"enter the second number to add"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}