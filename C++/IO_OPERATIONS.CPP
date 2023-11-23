#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"enter the value of number 1 \n";      // << is called insertion operator
    cin>>num1;                                  // >> is called extraction operator
    cout<<"enter the value of number 2 \n";
    cin>>num2;
    int sum=num1+num2;
    cout<<"the sum is :"<<sum;
}