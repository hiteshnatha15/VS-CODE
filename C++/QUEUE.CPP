#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node 
{
  int data;
  Node *next;
};

class Queue 
{
private:
  Node *front;
  Node *rear;
public:
  Queue() 
  {
    front = NULL;
    rear = NULL;
  }

  void enqueue(int value) 
  {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) 
    {
      front = newNode;
      rear = newNode;
    } else 
    {
      rear->next = newNode;
      rear = newNode;
    }
  }

  int dequeue() 
  {
    if (front == NULL) 
    {
      cout<<"QUEUE UNDERFLOW";
    }

    int value = front->data;
    Node *temp = front;
    front = front->next;
    delete temp;

    return value;
  }

 void traversing()
 {
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
                    cout<<l.dequeue();
                    break;
                }
        case 3:
                {
                    l.traversing();
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
