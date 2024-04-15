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

class linkedList
{
    public:
    Node* head;
    linkedList()
    {
        head=NULL;
    }
    void insertionAtFirst(int data)
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
    void insertionAtLast(int data)
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
    void insertionAtSpecifiedPosition(int value,int position)
{
    if (position < 0) 
        {
            cout << "POSITION CANNOT BE NEGATIVE" << endl;
            return;
        }
    Node* node = new Node(value);
    if (position == 0) 
        {
            // Insert at the front
            node->next = head;
            head = node;
        }
    else 
        {
            Node* temp = head;
            int count =0;
            while (temp != NULL && count < position - 1) 
            {
                temp = temp->next;
                count++;
            }
            if (temp == NULL) 
            {
                cout << "POSITION OUT OF BOUND" << endl;
                delete node; // Free memory if insertion is not successful
            }
            else 
            {
                node->next = temp->next;
                temp->next = node;
            }
        }
    }
    
    void deletionAtFirst()
    {
       if(head==NULL)
       {
        cout<<"LINKED LIST EMPTY.";
       }
       else
       {
        head=head->next;
        cout<<"ITEM DELETED SUCESSFULLY.";
       }

        
    }
    void deletionAtLast()
    {
        if(head==NULL)
        {
            cout<<"LINKED LIST EMPTY";
        }
        else if (head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        {
        Node* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        cout<<"ITEM DELETED SUCESSFULLY";
        }
       
    }
    void deletionAtSPecifiedPosition(int position)
    {
        if(head==NULL)
        {
            cout<<"LINKED LIST EMPTY";
        }
        else if(position<0)
        {
            cout<<"INVALID POSITION ENTERED.";
        }
        else if(position==0)
        {
            Node *temp=head;
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
            if(temp==NULL ||temp->next==NULL)
            {
                cout<<"LINKED LIST OUT OF BOUND";
            }
            else
            {
                Node* toDelete=temp->next;
                temp->next=toDelete->next;
                delete toDelete;
            }
        }
    }
    void searching(int element)
    {
        Node*temp=head;
        int position=0;
        while(temp->data!=element && temp->next!=NULL)
        {
            temp=temp->next;
            position++;
        }
        if (temp->data==element)
        {
            cout<<"ELEMENT FOUND AT "<<position<<" POSITION.";

        }
        else
        {
            cout<<"ELEMENT NOT FOUND";
        }
    }
    void traversing()
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
    linkedList l;
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
        cout<<"9.EXIT"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN FRONT.\n";
                    cin>>element;
                    l.insertionAtFirst(element);
                    break;
                }
        case 2:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED AT BACK.\n";
                    cin>>element;
                    l.insertionAtLast(element);
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
                    l.deletionAtFirst();
                    break;
                }
        case 5:
                {
                    l.deletionAtLast();
                    break;
                }
        case 6:
                {
                    int position;
                    cout<<"\nENTER THE POSITION FROM WHERE THE ELEMENT HAS TO BE DELETED.\n";
                    cin>>position;
                    l.deletionAtSPecifiedPosition(position);
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
                    exit(0);
                    break;
                }
        default:
                cout<<"\nWRONG OPTION ENTERED\n";
                break;
        }
    }

}