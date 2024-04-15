#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t now = time(nullptr);
    cout<<"Number of seconds since January 1, 1970: "<<now<<endl;
 return 0;
}