#include<iostream>
using namespace std;

class NODE
{
    public:
    int data;
    NODE* next;
    
    NODE(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class LinkedList1
{
    public:
    NODE* HEAD;
    LinkedList1()
    {   
        HEAD=NULL;
    }

    void insertion(int data)
    {
        NODE* node=new NODE(data);
        NODE* temp=HEAD;
        if(HEAD==NULL)
        {
            HEAD=node;
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

    
    void deletetion()
    {
        if(HEAD==NULL)
        {
            cout<<"LINKED LIST EMPTY";
        }
        else
        {
            NODE* temp=HEAD;
            HEAD=HEAD->next;
            delete temp;
        }
    }

    
    void traversing()
    {
        NODE* temp=HEAD;
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
    LinkedList1 l1;
    LinkedList1 l2;
    LinkedList1 l3;
    int option;
    while(1)
    {
        cout<<"\n WELCOME TO LINKED LIST"<<endl;
        cout<<"ENTER THE FOLLOWING OPERATIONS TO BE PERFORMED"<<endl;
        cout<<"1.INSERTION AT LINKEDLIST 1."<<endl;
        cout<<"2.DELETION AT LINKED LIST 1."<<endl;
        cout<<"3.TRAVERSING THE LINKED LIST 1."<<endl;
        cout<<"4.INSERTTION AT LINKED LIST 2."<<endl;
        cout<<"5.DELETION AT LINKED LIST 2."<<endl;
        cout<<"6.TRAVERSING THE LINKED LIST 2."<<endl;
        cout<<"7.MERGING BOTH LINKED LIST."<<endl;
        cout<<"8.EXIT"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
                {
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN LINKED LIST 1.\n";
                    cin>>element;
                    l1.insertion(element);
                    break;
                }
        case 2:
                {
                    l1.deletetion();
                    break;
                }
        case 3:
                {
                    cout<<"\nLINKED LIST 1\n"<<endl;
                    l1.traversing();
                    break;
                }
        case 4:
                {
                    
                    int element;
                    cout<<"\nENTER THE ELEMENT TO BE INSERTED IN LINKED LIST 2.\n";
                    cin>>element;
                    l2.insertion(element);
                    break;
                }
        case 5:
                {
                    l2.deletetion();
                    break;
                }
        case 6:
                {
                    cout<<"\nLINKED LIST 2\n"<<endl;
                    l2.traversing();
                    break;
                }
        case 7:
                {   
                    NODE* head1=l1.HEAD;
                    NODE* head2=l2.HEAD;
                    cout<<"LINKED LIST AFTER MERGING"<<endl;
                    while(head1!=NULL || head2!=NULL)
                    {
                        if(head1!=NULL)
                        {
                            l3.insertion(head1->data);
                            head1=head1->next;
                        }
                        if(head2!=NULL)
                        {
                            l3.insertion(head2->data);
                            head2=head2->next;
                        }
                    }
                    l3.traversing();
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