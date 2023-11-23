#include<iostream>
using namespace std;

class insertion
{
    public:
    
    int key;
    int array[100];
    int capacity;   
    insertion(int array[],int capacity)
    {
        this->capacity=capacity;
        for(int i=0;i<capacity;i++)
        {
            this->array[i]=array[i];
        }
        key=array[1];
    }

    void sorting()
    {
        int i, key, j;
        for (i = 1; i <capacity; i++)
        {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
        }
        traversing();
    }

    void traversing()
    {
        cout<<"THE ARRAY ELEMENTS ARE: "<<endl;
        for(int i=0;i<capacity;i++)
        {
            cout<<array[i]<<" ";
        }
    }
};
int main()
{
    int capacity;
    cout<<"ENTER CAPACITY OF ARRAY"<<endl;
    cin>>capacity;
    int array[capacity];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<capacity;i++)
    {
        cin>>array[i];
    }
    insertion l(array,capacity);
    l.sorting();
    return 0;
}