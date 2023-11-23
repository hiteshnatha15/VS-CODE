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

class Queue
{
    public:

    Node* front;
    Node* rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    void enqueue(int data)
    {
        Node* node=new Node(data);
        if(front==NULL && rear==NULL)
        {
            front=node;
            rear=node;
        }
        else
        {
           rear->next=node;
           rear=node;
        }
    }

    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"EMPTY QUEUE"<<endl;
        }
        else
        {
            Node* temp=front;
            front=front->next;
            delete temp;
        }
    }

    void traverse()
    {
         if(front==NULL)
        {
            cout<<"EMPTY QUEUE"<<endl;
        }
        Node* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    Queue l;
    int option;
    while(1)
    {
        cout<<"\n WELCOME TO QUEUE"<<endl;
        cout<<"ENTER THE FOLLOWING OPERATIONS TO BE PERFORMED"<<endl;
        cout<<"1.ENQUEUE"<<endl;
        cout<<"2.DEQUEUE"<<endl;
        cout<<"3.TRAVERSING"<<endl;
        cout<<"4.EXIT"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN FRONT.\n";
                    cin>>element;
                    l.enqueue(element);
                    break;
                }
        case 2:
                {
                    l.dequeue();
                    break;
                }
        case 3:
                {
                    l.traverse();
                    break;
                }
        case 4:
                {
                    exit(0);
                    break;
                }

        default:
                cout<<"\nWRONG OPTION ENTERED\n";
                break;
        }
    }
    return 0;
}
