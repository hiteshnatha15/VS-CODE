#include<iostream>
using namespace std;
int factorial(int a)
    {
        if (a<=1)
        {
            return 1;
        }
    return a*factorial(a-1);
        
    }
int fibonacci(int b)
    {
        if(b<2)
        {
            return 1;
        }
    return fibonacci(b-2)+fibonacci(b-1); 
        
    }
int main()
{
    int a,b;   
    cout<<"enter the number for factorial"<<endl;
    cin>>a;
    cout<<"the factorial is :"<<factorial(a)<<endl;
    cout<<"enter the index for fibonacci position";
    cin>>b;
    cout<<"the number at "<<b <<"position is "<<fibonacci(b);
    return 0;
}