#include<iostream>
using namespace std;

//typecasting is used to change the datatype of variable
//syntax   data type(variable)   or (data type)variable 

int main()
{
    int a=45;
    float b=45.46;
    cout<<"the value of a is:"<<(float)a<<endl;
    cout<<"value of b is:"<<int(b)<<endl;
    cout<<"the expression is"<<a+b<<endl;
    cout<<"the expression is"<<a+int(b)<<endl;
    cout<<"the expression is"<<a+(int)b<<endl;
    
    return 0;
}