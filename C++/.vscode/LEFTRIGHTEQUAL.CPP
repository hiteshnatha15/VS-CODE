#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int right = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 2; i < n; i++)
    {
        right = right + v[i];
    }
    int left = v[0];
    int result = 0;
    for (int i = 1; i < n - 2; i++)
    {
        if (right == left)
        {
            result = v[i];
            break;
        }
        else
        {
            right = right - v[i + 1];
            left = left + v[i - 1];
        }
    }
    cout << result << endl;
    return 0;
}