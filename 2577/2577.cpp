#include <iostream>
using namespace std;

int main()
{
	int count[10] = {};
	int a, b, c;
	cin >> a >> b >> c;
	int multi = a * b * c;

	while (multi != 0)
	{
		count[multi % 10]++; //나누고 난 나머지 값이 해당 자리수의 숫자이므로 이를 인덱스로 이용
		multi = multi / 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << endl;
	}
}