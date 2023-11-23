#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double x=3;
    cout<<x;

//manipulators are those operators which are used for data formatting eg; endl-> for next line and setw-> for making the output right justified

    int a=3,b=55,c=1433;
    cout<<"the value of a is :"<<setw(4)<<a<<endl;
    cout<<"the value of b is :"<<setw(4)<<b<<endl;
    cout<<"the value of c is :"<<setw(4)<<c<<endl;
    return 0;

//operator precedence
int d=3,e=5,f=5;
int sum=(d*5)+e-45+87;
cout<<sum;
}

