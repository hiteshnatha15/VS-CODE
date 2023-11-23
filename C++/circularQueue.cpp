#include<iostream>
using namespace std;
#define capacity 10

class queue
{
    public:

    int queue[capacity];
    int rear=-1;
    int front=-1;

    void enqueue(int data)
    {
        if((rear+1)%capacity==front)
        {
            cout<<"queue overflow";
        }
        else
        {
            if(front==-1)
            front++;

            rear=(rear+1)%capacity;
            queue[rear]=data;
        }
    }

    void dequeue()
    {
        if(front==-1)
        {
            cout<<"queue underflow";
        }
        else
        {
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            front=(front+1)%capacity;
        }
    }

    void traverse()
    {
        if(front==-1)
        {
            cout<<"queue is empty";
        }
        else
        {
            cout<<"the array elemens are:";
            if(front<=rear)
            {
                for(int i=front;i<=rear;i++)
                {
                    cout<<queue[i]<<"\t";
                }
            }
            else
            {
                for(int i=front;i<capacity;i++)
                {
                    cout<<queue[i]<<"\t";
                }
                for(int i=0;i<=rear;i++)
                {
                    cout<<queue[i]<<"\t";
                }
            }
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