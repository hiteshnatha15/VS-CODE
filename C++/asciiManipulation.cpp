#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII value of " << c << " is " << int(c+1);
 return 0;
}