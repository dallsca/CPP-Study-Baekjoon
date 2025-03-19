#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        arr[i] %= 42;
    }

    for (int i = 0; i < 10; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            count++;
        }
    }

    cout << count;
    return 0;
}
// 문제를 풀긴 했으나 이중 for문을 사용해서 복잡도가 커지므로 다른 좋은 방법을 같이 첨부
