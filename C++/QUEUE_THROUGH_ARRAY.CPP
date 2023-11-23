#include<iostream>
using namespace std;
const int size=10;
class queue
{
    public:

    int array[size];
    int front;
    int rear;
    queue()
    {
        front=-1;
        rear=-1;
    }

    void enqueue(int data)
    {
        if(rear==9)
        {
            cout<<"QUEUE OVERFLOW"<<endl;
        }
        else if(front==-1 && rear==-1)
        {
            front++;
            rear++;
            array[rear]=data;
        }
        else
        {
            rear++;
            array[rear]=data;
        }
    }

    void dequeue()
    {
        if(front==-1|| front>rear)
        {
            cout<<"QUEUE UNDERFLOW"<<endl;
        }
        else
        {
            array[front]=0;
            front++;
        }

    }

    void traverse()
    {
        if(rear==-1|| front>rear)
        {
            cout<<"EMPTY QUEUE"<<endl;
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int choice,value;
    queue q;
   cout<<"1) Enqueue"<<endl;
   cout<<"2) Dequeue"<<endl;
   cout<<"3) Traverse"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>choice;
      switch(choice) 
      {
         case 1: 
         {
            cout<<"Enter value to be enqueued:"<<endl;
            cin>>value;
            q.enqueue(value);
            break;
         }
         case 2: 
         {
            q.dequeue();
            break;
         }
         case 3:
         {
            q.traverse();
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
    while(choice!=4);
    return 0;
}