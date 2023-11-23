#include<iostream>
using namespace std;
#define capapity 10

class queue
{
    public:

    int queue[capapity];
    int front=-1;
    int rear=-1;

    void enqueue(int element)
    {
        if(rear==capapity-1)
        {
            cout<<"queue overflow";
        }
        else 
        {
            if(front==-1)
            {
                front++;
            }
            
            rear++;
            queue[rear]=element;
        }
    }

    void dequeue()
    {
        if(front==-1 || front>rear)
        {
            cout<<"queue underflow";
        }
        else
        {
            front++;1
            
        }    
    }

    void traverse()
    {
        if(front==-1)
        {
            cout<<"Empty Queue";
        }
        else
        {
            cout<<"the queue elements are "<<endl;
            for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<"\t";
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