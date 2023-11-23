#include<iostream>
using namespace std;

int main()
{
    //pointer arithemetic      address new=address of base+i*size of data type
    int arr[5]={30,45,455,368,97};
    int *p=arr;
    cout<<"the value at marks[0] is"<<*p<<endl;
    cout<<"the value at marks[1] is"<<*(p+1)<<endl;
    cout<<"the value at marks[2] is"<<*(p+2)<<endl;
    cout<<"the value at marks[3] is"<<*(p+3)<<endl;
    cout<<"the value at marks[4] is"<<*(p+4)<<endl;
    return 0;
}