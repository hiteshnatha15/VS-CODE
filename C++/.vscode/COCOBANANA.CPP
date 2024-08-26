#include <iostream>
#include<vector>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int k = 1;
    int total = 0;
    while (1)
    {
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] % k == 0)
                total = total + (piles[i] / k);
            else
                total = total + (piles[i] / k + 1);
        }
        if (total <= h)
            return total;
        total=0;
        k++;
    }
}

int main()
{
    // code
    int h;
    cin >> h;
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }
    cout<<minEatingSpeed(piles,h);
    return 0;
}