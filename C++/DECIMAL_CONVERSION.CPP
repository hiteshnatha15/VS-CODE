#include<iostream>
using namespace std;

int main()
{   
    int no,type;
    cout<<"enter the decimal value to convert"<<endl;
    cin>>no;
    cout<<"enter the format to convert it \npress 1 for octal \n press 2 for hexadecimal"<<endl;
    cin>>type;
    
    switch (type)
    {
        break;
    case 1:
        cout<<oct;
        cout<<no;
        break;
    case 2:
        cout<<hex;
        cout<<no;
        break;
    default:
        cout<<"invalid input";
        break;
    }
    return 0;
}