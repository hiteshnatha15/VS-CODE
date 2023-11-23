#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a=4,b=5;
    cout<<"operators in c++"<<endl;
    //arithemetic operators
    cout<<"sum of a and b="<<a+b<<endl;
    cout<<"difference of a and b="<<a-b<<endl;
    cout<<"product of a and b="<<a*b<<endl;
    cout<<"difference of a and b="<<a/b<<endl;
    cout<<"modulus of a and b="<<a%b<<endl;

    /*
    increment/decrement operator
    ++a means first increment then the value is printed
    a++ means first value is printed and the value is incremented

    and same for decrement operator
    */
   
    cout<<"value of a++ is:"<<a++<<endl; 
    cout<<"value of ++a is:"<<++a<<endl; 
    cout<<"value of a-- is:"<<a--<<endl; 
    cout<<"value of --a is:"<<--a<<endl;

    //assignment operators '='

    int d=5;

    //comparison operator

    cout<<"the value of a==b is:"<<(a==b)<<endl;
    cout<<"the value of a!=b is:"<<(a==b)<<endl;
    cout<<"the value of a>b is:"<<(a>b)<<endl;
    cout<<"the value of a<b is:"<<(a<b)<<endl;
    cout<<"the value of a>=b is:"<<(a==b)<<endl;
    cout<<"the value of a<=b is:"<<(a==b)<<endl;

    //logical operators  && || !

    return 0;
}