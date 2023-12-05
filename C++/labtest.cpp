#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class linkedList
{
public:
    Node *head;

    linkedList()
    {
        head = NULL;
    }

    void insertionAtLast(int data)
    {
        Node *node = new Node(data);
        Node *temp = head;

        if (head == NULL)
        {
            head = node;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node;
        }

        cout<<"linked list"<<endl;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void traversing()
    {
        Node *temp=head;
        vector<int> vect;

        while (temp!=NULL)
        {
            vect.push_back(temp->data);
            temp=temp->next;
        }

        for(int i=vect.size()-1;i>0;i--)
        {
            cout<<vect[i] << " ";
        }
        cout<<endl;
    }
};

int main()
{
    linkedList l;
    int option;

    while (1)
    {
        cout << "1. INSERTION AT BACK" << endl;
        cout << "2. TRAVERSE THE LINKED LIST IN REVERSE ORDER" << endl;
        cout << "3. EXIT" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
        {
            int element;
            cout << "\nENTER THE ELEMENT TO BE INSERTED AT BACK.\n";
            cin >> element;
            l.insertionAtLast(element);
            break;
        }

        case 2:
        {
            cout << "\nLINKED LIST IN REVERSE ORDER\n";
            l.traversing();
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        default:
            cout << "\nWRONG OPTION ENTERED\n";
            break;
        }
    }

    return 0;
}
