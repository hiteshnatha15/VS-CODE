#include <iostream>
#include <map>
using namespace std;

int main()
{
    // code
    // int n;
    // cin >> n;
    // int str[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> str[i];
    // }
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[str[i]]++;
    // }
    // map<int, int>::iterator it = mpp.begin();
    // int maxi = INT_MIN;
    // int ans = -1;
    // while (it != mpp.end())
    // {
    //     if (maxi < it->second)
    //     {
    //         ans = it->first;
    //     }
    //     it++;
    // }
    // cout << ans;

    map<int, string> mp;
    mp.insert(make_pair(1, "Hitesh"));
    mp.insert(make_pair(2, "Mohit"));
    mp.insert(make_pair(3, "Jeetu"));
    mp[4] = "Tanish";
    map<int, string>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}