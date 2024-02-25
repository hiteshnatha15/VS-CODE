#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number till you want the prime numbers to be printed";
    int num;
    cin >> num;
    vector<bool> prime(num + 1, true);
    prime[0]=prime[1]=false;

    for(int i=2;i*i<=num;i++)
    return 0;
}