#include<iostream>
using namespace std;

class stack
{
    public:

    int top;
    char array[100];
    stack()
    {
        top=-1;
        for(int i=0;i<100;i++)
        {
            array[i]='\0';
        }
    }

    void push(char element)
    {
        if(top>=99)
        {
            cout<<"stack overflow";
        }
        else
        {
            top++;
            array[top]=element;
        }
    }

    void reverse()
    {
        while(top!=-1)
        {
            cout<<array[top];
            top--;
        }
    }
};
int main()
{
    stack s;
    while(1)
    {
    cout<<"CHOOSE THE FOLLOWING OPTIONS."<<endl;
    cout<<"1. PUSH THE STRING"<<endl;
    cout<<"2. REVERSE THE STRING"<<endl;
    int option;
    cin>>option;    
    switch (option)
    {
    case 1:
        {
        cout<<"enter the element"<<endl;
        int element;
        cin>>element;
        s.push(element);
        break;
        }
    
    case 2:
       {
        cout<<"REVERSED STACK IS:";
        s.reverse();
        return 0;
        break;
       }

    default:
        cout<<"INVALID OPTION";
        break;
    }
    }
 return 0;
}