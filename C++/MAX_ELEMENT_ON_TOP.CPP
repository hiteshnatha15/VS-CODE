#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) 
{
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else 
   {
      top++;
      stack[top]=val;
   }
}
void pop() 
{
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else 
   {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() 
{
   if(top>=0) 
   {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<endl;
      cout<<endl;
   }
   else
   cout<<"Stack is empty";
}
void minElement() 
{
    if (top == -1) 
    {
        cout << "Stack is empty" << endl;
        return;
    }

    int min = stack[top];
    int minIndex = top;

    for (int i = top - 1; i >= 0; i--) 
    {
        if (stack[i] < min) 
        {
            min = stack[i];
            minIndex = i;
        }
    }

    int temp = stack[minIndex];
    for (int i = minIndex; i < top; i++) 
    {
      stack[i] = stack[i + 1];
    }
    stack[top] = temp;

    cout << "Minimum element " << min << " moved to the top" << endl;
    display();
}

int main() 
{
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Get Min Element On Top"<<endl;
   cout<<"5) Exit"<<endl;
   do 
   {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
      {
         case 1: 
         {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: 
         {
            pop();
            break;
         }
         case 3: 
         {
            display();
            break;
         }
        case 4:
        {
          minElement();
          break;  
        }
         case 5: 
         {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
         {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}