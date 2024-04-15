#include <iostream>
using namespace std;

int main() {
    int height = 10; // Adjust the height of the tree

    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 0; j < height - i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout <<endl;
    }

    // Print the tree trunk
    for (int i = 0; i < height - 1; i++) {
        cout << " ";
    }
        cout << "*" <<endl;

    return 0;
}
