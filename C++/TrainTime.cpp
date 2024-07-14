#include<iostream>
using namespace std;


int main()
{
    int hours;
    cout<<"Enter the hours";
    cin>>hours;
    int minutes;
    cout<<"Enter the minutes";
        cin>>minutes;
    int totalTime=1440-((hours*60)+minutes);
    cout<<"hours"<<totalTime/60<<"::minutes"<<totalTime%60;
    return 0;
}
