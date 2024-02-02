#include<iostream>
using namespace std;

class ChineseRemainder {
public:
    int calculate(int div[], int size, int rem[]) {
        int i = 0;
        int x = 1;

        while (true) {
            for (i = 0; i < size; i++) {
                if (x % div[i] != rem[i]) {
                    break;
                }
            }
            
            if (i == size) {
                return x;
            }

            x++;
        }
    }
};

int main() {
    int pointer;
    cin>>pointer;
    cout<<"hello";
    ChineseRemainder c;
    int div[5] = {1, 2, 3, 4, 5};
    int rem[5] = {2, 3, 4, 5, 6};
    int size = 4;
    int ans = c.calculate(div, size, rem);
    cout << ans;
    return 0;
}
