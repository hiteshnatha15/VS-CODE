#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class Stack
{
    public:
    Node*head;

    Stack()
    {
        head=NULL;
    }

    void push(int data)
    {
        Node* node=new Node(data);
        if(head==NULL)
        {
            head=node;
        }
        else
        {
            node->next=head;
            head=node;
        }

    }

    void pop()
    {
        if(head==NULL)
        {
            cout<<"STACK UNDERFLOW";
        }
        else
        {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    void traverse()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main()
{
   int ch, val;
   Stack stack;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
      {
         case 1: 
         {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            stack.push(val);
            break;
         }
         case 2: 
         {
            stack.pop();
            break;
         }
         case 3: 
         {
            stack.traverse();
            break;
         }
         case 4: 
         {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
         {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   while(ch!=4);
   return 0;
}