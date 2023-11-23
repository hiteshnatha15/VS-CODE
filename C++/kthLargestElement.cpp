#include<iostream>
#include<algorithm>
using namespace std;

void searching(int nums[],int k,int n)
{
    int i, j; 
    for (i = 0;i < n - 1;i++) 
    {
        for (j = 0;j < n - i - 1;j++) 
        {
            if (nums[j] > nums[j + 1]) 
            swap(nums[j], nums[j + 1]); 
        }
    }

    cout<<"Kth smallest element is:"<<nums[k-1];    
}

int main()
{
    int nums[9]={3,2,3,1,2,4,5,5,6};
    int k=4;
    int n=10;
    searching(nums,k,n);
    return 0;
}