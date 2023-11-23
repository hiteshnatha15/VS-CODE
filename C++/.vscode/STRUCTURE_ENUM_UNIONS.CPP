#include<iostream>
using namespace std;

//structure----->used for user defined data type
struct employee
{
    int eID;
    char favChar;
    float salary;
};

//union------>same as structure and have better memory management and only one type can be used among the defined variable in the union
union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{ 
    struct employee hitesh;
    hitesh.eID=101;
    hitesh.favChar='x';
    hitesh.salary=120000;
    cout<<hitesh.salary<<endl; 

    union money m1;
    m1.rice=1000;
    m1.car='c';
    cout<<m1.car<<endl;  //it overrides the previos called union and latest union variable defined is pointed

    //enum----->
    enum meal{breakfast,lunch,dinner};
    meal m2=dinner;
    cout<<m2;
    return 0;
}