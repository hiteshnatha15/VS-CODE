#include<iostream>
using namespace std;

int main()
{
    /*
    c++ control structures:
    1.sequence structure       entry----->action1----->action2
    2.selection structure      entry----->condition---->if true then action1 or if false then action2
    3.loop structure           entry----->condition---->action1 is performed till the condition is satisfying and is false then action2
    */
   int age;
   cout<<"tell me your age :";
   cin>>age;
   if(age<18 && age>=1)
   {
        cout<<"you cannot come to my party!";
   }
   else if(age<1)
    {
        cout<<"you are not born till yet";
    }
   else if(age==18)
   {
       cout<<"you are a kid and come to my party with kid pass";
   }
   else
        cout<<"you can come to my party";

    switch (age)
    {
    case 18:
        cout<<"you are a kid and come to my party with kid pass";
        break;
    
    default:
    cout<<"404 error!!!";
        break;
    }
    return 0;
}