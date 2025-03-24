#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    // 문자열을 정렬
    sort(N.begin(), N.end());

    // 문자열을 역순으로 정렬
    reverse(N.begin(), N.end());

    // 결과 출력
    cout << N;
    return 0;
}
