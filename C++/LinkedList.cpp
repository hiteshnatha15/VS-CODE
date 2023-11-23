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
        this->next=NULL;
    }
};

class LinkedList
{
    public:

    Node* head;
    LinkedList()
    {
        head=NULL;
    }

    void insertAtHead(int data)
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

    void insertAtlast(int data)
    {
        Node* node=new Node(data);
        if(head==NULL)
        {
            head=node;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=node;
        }
    }

    void insertAtSpecifiedPosition(int data,int position)
    {
        Node* node=new Node(data);
        if(position<0)
        {
            cout<<"invalid position";
        }
        else if(position==0)
        {
            node=head->next;
            head=node;
        }
        else
        {
            Node*temp=head;
            for(int i=1;i<position-1;i++)
            {
                temp=temp->next;
            }
            if(temp==NULL)
            {
                cout<<"out of bound"<<endl;
            }
            else
            {
            node->next=temp->next;
            temp->next=node;
            }
        }
    }
    void deleteAtFirst()
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    void deleteAtLast()
    {
        Node* temp=head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
    }

    void deleteAtSpecifiedPosition(int position)
    {
        if(position<0)
        {
            cout<<"invalid position";
        }
        else if(position==0)
        {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        else
        {
            Node*temp=head;
            for(int i=1;i<position-1;i++)
            {
                temp=temp->next;
            }
            if(temp==NULL|| temp->next==NULL)
            {
                cout<<"out of bound"<<endl;
            }
            else
            {
                Node* todelete=temp->next;
                temp->next=temp->next->next;
                delete todelete;
            }
        }
    }
    void traverse()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    LinkedList l;
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
        case 2:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED AT BACK.\n";
                    cin>>element;
                    l.insertAtlast(element);
                    break;
                }
        case 3:
                {
                    int element,position;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN THE SPECIFIED POSITION.\n";
                    cin>>element;
                    cout<<"\nENTER THE POSITION TO INSERT THE ELEMENT.\n";
                    cin>>position;
                    l.insertAtSpecifiedPosition(element,position);
                    break;
                }
        case 4:
                {
                    l.deleteAtFirst();
                    break;
                }
        case 5:
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
                }
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
    return 0;
}