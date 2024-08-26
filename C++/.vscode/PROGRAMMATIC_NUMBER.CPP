#include <iostream>
using namespace std;

int main()
{
    string given;
    cin >> given;
    string str = "";
    for (int i = given.size() - 1; i >= 0; i--)
    {
        if (given[i] == '6')
        {
            str = str + '9';
        }
        else if (str[i] == '9')
        {
            str = str + '6';
        }
        else if (str[i] == '8')
        {
            str = str + '8';
        }
        else if (str[i] == '1')
        {
            str = str + '1';
        }
        else if (str[i] == '0')
        {
            str = str + '0';
        }
        else
        {
            cout << "No";
            return 0;
        }
    }
    if (str == given)
        cout << "Yes";
    else
    cout << "No";
    return 0;
}