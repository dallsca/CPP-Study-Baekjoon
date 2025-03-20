#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        int* a = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        int min = 0, max = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
            if (a[j] > a[max]) {
                max = j;
            }
        }

        int minlength = (a[max] - a[min]) * 2;
        delete[] a;
        cout << minlength << endl;
    }
    return 0;
}

//제일 작은 값과 제일 큰 값을 찾아서 그 두개의 차이에 2배를 하는것이 최소한의 거리이다.