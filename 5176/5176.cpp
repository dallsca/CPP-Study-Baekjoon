#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int P, M;
        cin >> P >> M;
        int arr[500] = { 0 };  
        int count = 0;
        for (int j = 0; j < P; j++) {
            int seatnum;
            cin >> seatnum;
            if (arr[seatnum - 1] == 0) {
                arr[seatnum - 1] = 1;
            }
            else {
                count++;
            }
        }
        cout << count << endl; 
    }
    return 0;
}
