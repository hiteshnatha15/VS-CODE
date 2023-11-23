/*Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.*/

#include<iostream>
using namespace std;

int main()
{
    int platform=0;
    int count=0;
    int arr[]={900, 940, 950, 1100, 1500, 1800};
    int dep[]={910, 1200, 1120, 1130, 1900, 2000};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if(arr[i]>=arr[j] && dep[i]>=arr[j])
            {
                count++;
            }

            if(count>platform)
            {
                platform=count;
            }
        }
      
    }

    cout<<"Minimum Platform Required At the Station are: "<<platform;
    return 0;
}