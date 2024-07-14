#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // code
    string s = "";
    cin>>s;
    int ans=0;

    for(int i=0;i<s.length();i++){
        int ans=ans+stoi(string(s[i]))
    }
    return 0;
}