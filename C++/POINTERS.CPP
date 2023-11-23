#include<iostream>
using namespace std;

int main()
{
    //pointer----->it is a type of data type which holds the address of other data types

    int a=3;
    int *b=&a;       //*----->dereference operator    &-----> address of operator
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<"the value at address b is :"<<*b<<endl;

    //pointer to pointer 

    int **c=&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address of address of c is"<<**c<<endl;
    
    return 0;
}