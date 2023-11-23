#include<iostream>
using namespace std;

inline int product(int a,int b)
    {
        return a*b;
    }
float moneyRecieved(int currentMoney,float factor=1.04)    //defalt arguments----->if no value is specified during function calling the default of arguments will be used and if specified then specified value will be used.
    {
        return currentMoney*factor;
    }

int strlen(const chap *p)
    {   
        
    }

int main()
{
    /*inline function------>An inline function is one for which the compiler copies the code from the function definition directly into the code
                            of the calling function rather than creating a separate set of instructions in memory.
    do not use inline function in recursion,static values

    static values------>this executes only one time and next time the function is run,the value of c will be retained,
    */

    int a,b;
    cout<<"enter two nubers to multiply"<<endl;
    cin>>a>>b;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    
    int money=100000;
    cout<<"if you have"<<money<<"rs in your bank account,you will recieve"<<moneyRecieved(money)<<"after one year"<<endl;
    cout<<"if you have"<<money<<"rs in your bank account,you will recieve"<<moneyRecieved(money,1.10)<<"after one year"<<endl;


    return 0;
}