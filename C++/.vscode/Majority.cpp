#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>n/2){
            cout<<it->first;
            break;
        }
    }
    return 0;
}