#include<iostream>
using namespace std;

class Node
{
    public:
    Node* previous;
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        previous=NULL;
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

    void insertionAtHead(int data)
    {
        Node* temp=new Node(data);
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            temp->next=head;
            head->previous=temp;
            head=temp;
        }
    }

    void insertionAtEnd(int data)
    {
            Node*temp=head;
            Node* node=new Node(data);
            if(head==NULL)
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
                node->previous=temp;
            }
    }

    void insertionAtSpecifiedPosition(int data,int position)
    {
        Node* temp=head;
        Node* node=new Node(data);
        int count =0;
        if(position<0)
        {
            cout<<"INVALID POSITION.";
        }
        if(position==0 && head==NULL)
        {
            head=node;
        }
        else if(position==0 && head!=NULL)
        {
            node->next=head;
            head=node;
            head->previous=node;
        }
        else
        {
            while(temp!=NULL && count<position-1)
            {
            temp=temp->next;
            count++;
            }
        if (temp==NULL)
            {
            cout<<"POSITION OUT OF BOUND";
            }
        else
            {
            node->next=temp->next;
            node->previous=temp;
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
            head->previous=NULL;
            delete temp;
        }
    }    

    void deleteAtEnd()
    {
        Node*temp=head;
        if(head==NULL)
        {
            cout<<"LINKED LIST EMPTY";
        }
        else if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        { 
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->previous->next=NULL;
            delete temp->previous->next;
        }
    }

    void deleteAtSpecifiedPosition(int position)
    {
        if(position<0 || head==NULL)
        {
            cout<<"INVALID POSITION";
        }
        else if (position==0)
        {
            Node* temp=head;
            head=head->next;
            if(head!=NULL)
            {
                head->previous=NULL;
            }
            delete temp;
        }
        else
        {
            Node* temp=head;
            int count=0;
            while (temp!=NULL && count<position) 
            {
                temp=temp->next;
                count++;
            }   
            if(temp==NULL)
            {
                cout<<"INDEX OUT OF BOUND";
            }
            else
            {
                temp->previous->next=temp->next;
                if(temp->next!=NULL)
                {
                    temp->next->previous=temp->previous;
                }
                delete temp;
            }
        }
        
    }

    void searching(int element)
    {
        Node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            if(temp->data==element)
            {
                cout<<"ELEMENT FOUND AT"<<count<<"POSITION"<<endl;
            }
            temp=temp->next;
            count++;
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
        if(head!=NULL)
        {
            head->previous=NULL;
        }
    }

};
int main()
{
    linkedList l;
    l.insertionAtHead(5);
    l.insertionAtHead(6);
    l.insertionAtEnd(10);
    l.insertionAtEnd(20);
    l.insertionAtSpecifiedPosition(100,4);
    //l.deleteAtHead();
    //l.deleteAtEnd();
    l.deleteAtSpecifiedPosition(1);
    l.searching(10);
    l.traverse();
    return 0;
}