#include <iostream>
using namespace std;

int main()
{
    string given;
    cin >> given;
    string str = "";
    for (int i = 0; i < given.size(); i++)
    {
        char ch;
        if (given[i] >= 'a' && given[i] <= 'z')
            ch = 'A' + given[i] - 'a';
        else if (given[i] >= 'A' && given[i] <= 'Z')
            ch = 'a' + given[i] - 'A';
        else
            ch = given[i];
        str = str + ch;
    }
    cout << str;
    return 0;
}