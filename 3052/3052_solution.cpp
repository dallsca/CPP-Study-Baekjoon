#include <iostream>
using namespace std;
int main() {
	int array[42] = {};
	int input;
	for (int i = 0; i < 10; ++i)
	{
		cin >> input;
		++array[input % 42];
	}
	int count = 0;
	for (int i = 0; i < 42; ++i) if (array[i] > 0) ++count;
	cout << count;
}
//다른사람이 해결한 좋은 해답 참고