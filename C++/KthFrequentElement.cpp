#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void frequency(int nums[], int k, int n) 
{
    sort(nums, nums + n);
    vector<int> vect;
    int count = 1; 
    for (int i = 1; i < n; i++)
     {
        if (nums[i] == nums[i - 1]) 
        {
            count++;
        } 
        
        else
        {
            if (count >= k) 
            {
                vect.push_back(nums[i - 1]);
            }
            count = 1;
        }
    }

    if (count >= k) 
    {
        vect.push_back(nums[n - 1]);
    }

    for (int i = 0; i < vect.size(); i++) 
    {
        cout << vect[i] << "\n";
    }
}

int main() 
{
    int nums[] = {1, 1, 1, 2, 2, 3};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    frequency(nums, k, n);
    return 0;
}

