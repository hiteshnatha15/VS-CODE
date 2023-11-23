#include <iostream>
#include <string>
using namespace std;

struct Employee 

{    int emp_id;
    string Employee_name;
    int salary;
};

int binarySearch(Employee arr[], int left, int right, int target,int &count) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        count++;

        if (arr[mid].emp_id == target) 
        {
            return mid;
        }

        if (arr[mid].emp_id < target) 
        {
            left = mid + 1;
        } else 
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main() 
{
    Employee employees[] = 
    {
        {101, "Hitesh",40000},
        {205, "Mohit",60000},
        {312, "Jitendra",30000},
        {417, "Love",20000},
        {520, "Safiur",250000}
    };

    int n = 5;
    int targetID = 312;
    int count;

    int result = binarySearch(employees, 0, n - 1, targetID,count);

    if (result == -1) 
    {
        cout << "Employee with ID " << targetID << " not found." << endl;
    } else 
    {
        cout << "Employee with ID " << targetID << " found at index " << result <<endl;
        cout<<"Employee name: "<<employees[result].Employee_name<<endl;
        cout<<"Employee salary: "<<employees[result].salary<<endl;
        cout<<"Comparisons happened: "<<count<<endl;
    }
}