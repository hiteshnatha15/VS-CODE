#include<iostream>
using namespace std;

class LinkedList
{
    public:

    int data;
    LinkedList* next;
    
    LinkedList(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class stack
{
    public:
    LinkedList* top;
    stack()
    {
        top=NULL;
    }

    void push(int data)
    {
        LinkedList* Node=new LinkedList(data);
        if(top==NULL)
        {
            top=Node;
        }
        else
        {
            Node->next=top;
            top=Node;
        }
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow";
        }
        else if(top->next==NULL)
        {
            top=NULL;
        }
        else
        {
            LinkedList* temp;
            temp=top;
            top=top->next;
            delete temp;
        }
    }

    void peek()
    {
        if(top==NULL)
        {
            cout<<"stack underflow";
        }
        else
        {
            cout<<"the element at top is "<<top->data;
    }
        }
};

int main()
{
    stack s;
    int ch;
    int val;
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