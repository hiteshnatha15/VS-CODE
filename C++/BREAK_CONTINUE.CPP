#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)                  //break is used to stop the iteration.
    {
        if (i==2)
        {
            break;
        }
    cout<<i<<endl;
    }
    for (int i = 0; i < 4; i++)                  //continue is used to skip the iteration.
    {
        if (i==2)
        {
            continue;
        }
    cout<<i<<endl;
    }
    return 0;
}