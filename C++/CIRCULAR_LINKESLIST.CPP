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

class Linkedlist
{
    public:

    Node* head;
    Linkedlist()
    {
        head=NULL;
    }

    void insertAtHead(int data)
    {
        Node* node=new Node(data);
        if(head==NULL)
        {
            head=node;
            node->next=head;
        }
        else
        {
            node->next=head;
            head=node;
        }
    }

    void inserAtLast(int data)
    {
        Node* node=new Node(data);
        if(head==NULL)
        {
            head=node;
            node->next=node;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=head)
            {
                temp->next=node;
                node->next=head;
            }
        }
    }

    void deleteAtfirst()
    {
        if(head==NULL)
        {
            cout<<"linked liast underflow";
        }
        else if(head->next==head)
        {
            Node* temp=head;
            head=NULL;
            delete temp;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=head->next;
            Node* toDelete=head;
            head=head->next;
            delete toDelete;
        }
    }

    void traverse()
    {
        Node* temp=head;
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp!=head);
    }
};

int main()
{
    Linkedlist l;
    int option;
    while(1)
    {
        cout<<"\n WELCOME TO LINKED LIST"<<endl;
        cout<<"ENTER THE FOLLOWING OPERATIONS TO BE PERFORMED"<<endl;
        cout<<"1.INSERTION AT FRONT"<<endl;
        cout<<"2.INSERTION AT BACK"<<endl;
        cout<<"3.INSERTION AT SPECIIFIED POSITION"<<endl;
        cout<<"4.DELETION AT FRONT"<<endl;
        cout<<"5.DELETION AT END"<<endl;
        cout<<"6.DELETION AT SPECIFIED POSITION"<<endl;
        cout<<"7.TRAVERSE THE LINKED LIST"<<endl;
        cout<<"8.EXIT"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN FRONT.\n";
                    cin>>element;
                    l.insertAtHead(element);
                    break;
                }
        /*case 2:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED AT BACK.\n";
                    cin>>element;
                    l.insertAtlast(element);
                    break;
                }*/
        /*case 3:
                {
                    int element,position;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN THE SPECIFIED POSITION.\n";
                    cin>>element;
                    cout<<"\nENTER THE POSITION TO INSERT THE ELEMENT.\n";
                    cin>>position;
                    l.insertAtSpecifiedPosition(element,position);
                    break;
                }*/
        case 4:
                {
                    l.deleteAtfirst();
                    break;
                }
        /*case 5:
                {
                    l.deleteAtLast();
                    break;
                }
        case 6:
                {
                    int position;
                    cout<<"\nENTER THE POSITION FROM WHERE THE ELEMENT HAS TO BE DELETED.\n";
                    cin>>position;
                    l.deleteAtSpecifiedPosition(position);
                    break;
                }*/
        case 7:
                {
                    cout<<"\nLINKED LIST\n"<<endl;
                    l.traverse();
                    break;
                }
        case 8:
                {
                    exit(0);
                    break;
                }
        default:
                cout<<"\nWRONG OPTION ENTERED\n";
                break;
        }
    }
}