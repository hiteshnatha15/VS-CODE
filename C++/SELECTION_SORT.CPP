#include<iostream>
using namespace std;

int main()
{
    int array[4]={1,9,3,6};
    
    for(int i=0;i<4;i++)
    {
        int minimumvalue=array[i];
        int minimumindex=i;

        for(int j=i+1;j<4;j++)
        {          
            if(minimumvalue>array[j])
            {  
                minimumvalue=array[j];
                minimumindex=j;
            } 
        }
        swap(array[i],array[minimumindex]);
    }

    for(int i=0;i<4;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}