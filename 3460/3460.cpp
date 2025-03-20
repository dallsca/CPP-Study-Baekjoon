#include <iostream>
using namespace std;

int main() {
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        int index = 0;
        while (n != 0) {
            if (n % 2 == 1) {
                cout << index << " ";
            }
            n = n / 2;
            index++;
        }
        cout << endl;
    }
    return 0;
}
