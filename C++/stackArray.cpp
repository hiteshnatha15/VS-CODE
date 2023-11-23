#include<iostream> 
#define capacity 100
using namespace std;

class stack
{
    public:

    int array[capacity];
    int top=-1;
    
    void push(int element)
    {
        if(top<capacity)
        {
            top++;
            array[top]=element;
        }
        else
        cout<<"stack overflow";
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
        }
        else
        {
            array[top];
            top--;
        }
    }

    void peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
        }
        else
        {
            cout<<"the element at the top is "<<array[top];
        }
    }

};

int main()
{
    int val;
    int ch;
    stack s;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
         }
         case 2: {
            s.pop();
            break;
         }
         case 3: {
            s.peek();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
    return 0;
}