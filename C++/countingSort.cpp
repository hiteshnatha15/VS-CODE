#include<iostream>
using namespace std;

void countingArray()
{
    int array[9]={1,2,1,4,6,0,6,4,7};
    int maxElement=array[0];
    for(int i=1;i<=8;i++)
    {
        if(maxElement<array[i])
        {
            maxElement=array[i];
        }
    }
    cout<<maxElement<<endl;

    int countArray[maxElement+1];
    int flag=0;

    for(int i=0;i<maxElement+1;i++)
    {
        for(int j=0;j<=maxElement+1;j++)
        {
            if(array[j]==i)
            {
                flag++;
            }
        }
        countArray[i]=flag;
        flag=0;
    }

    int cummilativeArray[maxElement+1];
    int cummilative=0;

    for(int i=0;i<maxElement+1;i++)
    {
        cummilative=cummilative+countArray[i];
        cummilativeArray[i]=cummilative;
    }

    for (int i = 0; i<maxElement+1; i++)
    {
        cout<<countArray[i]<<endl;
    }

    cout<<"\n";

    for (int i = 0; i<maxElement+1; i++)
    {
        
        cout<<cummilativeArray[i]<<endl;
    }

    cout<<"\n";

    int finalArray[9];

    for(int i=8;i>=0;i--)
    {
        int position=cummilativeArray[array[i]]-1;
        finalArray[position]=array[i];
        cummilativeArray[array[i]]--;
    }
    for(int i=0;i<=8;i++)
    {
        cout<<finalArray[i]<<endl;
    }

}

int main()
{
    countingArray();
    return 0;
}
