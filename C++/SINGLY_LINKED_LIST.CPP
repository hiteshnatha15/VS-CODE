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

class LinkedList
{
    public:
    Node* head;
    LinkedList()
    {   
        head=NULL;
    }

    void insertionAtHead(int data)
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

    void insertionAtEnd(int data)
    {
        Node* node=new Node(data);
        Node* temp=head;
        if(temp==NULL)
        {
            head=node;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
        temp->next=node;
        }
    }

    void insertionAtSpecifiedPosition(int data,int position)
    {
         Node* node=new Node(data);
        if(position<0)
        {
            cout<<"INVALID POSITION ENTERED";
            return;
        }
        else if(position==0)
        {
           node->next=head;
           head=node;
        }
        else
        {
            Node* temp=head;
            int count=0;
            while(temp!=NULL && count<position-1)
            {
                count++;
                temp=temp->next;
            }
            if(temp==NULL)
            {
                cout<<"OUT OF BOUND";
                delete node;
            }
            else
            {
                node->next=temp->next;
                temp->next=node;
            }
        }
    }

    void deleteAtHead()
    {
        if(head==NULL)
        {
            cout<<"LINKED LIST EMPTY";
        }
        else
        {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }

    void deleteAtEnd()
    {
        Node* temp=head;
        if(head==NULL)
        {
            cout<<"LINKED LIST EMPTY";
        }
        else if (temp->next==NULL)
        {
            delete temp;
        }
        else
        {
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
        }
    }

    void deleteAtSpecifiedPosition(int position)
    {
        if(head==NULL)
        {
            cout<<"LINKED LIST EMPTY.";
            return;
        }
        if(position<0)
        {
            cout<<"INVALID POSITION ENTERED";
            return;
        }
        else if(position==0)
        {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        else
        {
            Node* temp=head;
            int count=0;
            while(temp!=NULL && count<position-1)
            {
                temp=temp->next;
                count++;
            }
            if(temp==NULL || temp->next==NULL)
            {
                cout<<"INDEX OUT OF BOUND";
            }
            else
            {
                Node* toDelete=temp->next;
                temp->next=temp->next->next;
                delete toDelete;
            }
        }
    }

    void searching(int element)
    {
        Node* temp=head;
        int count=0;
        while(temp->next!=NULL)
        {
            if(temp->data==element)
            {
                cout<<"ELEMENT FOUND AT "<<count<<" POSITION.";
                return ;
            }
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL)
        {
            cout<<"ELEMENT NOT FOUND.";
        }
    }

    void sorting()
    {
        Node* temp=NULL;
        Node* current=head;
        if(head==NULL || head->next==NULL)
        {
            cout<<"LINKED LIST EMPTY.";
            return ;
        }
        else
        {
            while(current!=NULL)
        {
            temp=current->next;
            while(temp!=NULL)
            {
                if(temp->next!=NULL && temp->data>temp->next->data)
            {
                swap(temp->data,temp->next->data);
            }
            temp=temp->next;
            }
            current=current->next;
        }
        }
    }

    void traversing()
    {
        Node* temp=head;
        if(temp==NULL)
        {
            cout<<"LINKED LIST EMPTY"<<endl;
        }
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
        cout<<"8.SEARCH THE ELEMENT."<<endl;
        cout<<"9.SORT THE ELEMENT."<<endl;
        cout<<"10.EXIT"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN FRONT.\n";
                    cin>>element;
                    l.insertionAtHead(element);
                    break;
                }
        case 2:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED AT BACK.\n";
                    cin>>element;
                    l.insertionAtEnd(element);
                    break;
                }
        case 3:
                {
                    int element,position;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN THE SPECIFIED POSITION.\n";
                    cin>>element;
                    cout<<"\nENTER THE POSITION TO INSERT THE ELEMENT.\n";
                    cin>>position;
                    l.insertionAtSpecifiedPosition(element,position);
                    break;
                }
        case 4:
                {
                    l.deleteAtHead();
                    break;
                }
        case 5:
                {
                    l.deleteAtEnd();
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
                    l.traversing();
                    break;
                }
        case 8:
                {
                    int element;
                    cout<<"ENTER THE ELEMENT TO BE SEARCHED.";
                    cin>>element;
                    l.searching(element);
                    break;
                }
        case 9:
                {
                    l.sorting();
                    l.traversing();
                    break;
                }
        case 10:
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