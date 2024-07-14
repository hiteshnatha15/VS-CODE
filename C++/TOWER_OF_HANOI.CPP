#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char dest, char aux)
{
    static int counter = 0;
    if (n >= 1)
    {
        towerOfHanoi(n - 1, source, aux, dest);
        counter++;
        cout << "step number " << counter << " disk " << n << " from " << source << " to " << dest << endl;
        towerOfHanoi(n - 1, aux, dest, source);
    }
}
int main()
{
    int n;
    cout << "number of disks wanted";
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}