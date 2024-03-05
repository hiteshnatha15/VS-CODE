#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {20, 40, 60};
    for_each(v.begin(), v.end(), [](int &x)
             { x = x + 2; });
    for_each(v.begin(), v.end(), [](int x)
             { cout << x << " "; });
    return 0;
}
