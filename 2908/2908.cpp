#include <iostream>

using namespace std;
int reverse(int a);

int main()
{
	int a, b, result;
	cin >> a >> b;
	int reverse_A = reverse(a);
	int reverse_B = reverse(b);

	if (reverse_B > reverse_A)
	{
		cout << reverse_B;
	}
	else if (reverse_B < reverse_A)
	{
		cout << reverse_A;
	}
	else
	{
		cout << "값이 동일합니다" << endl;
	}
	return 0;
}

int reverse(int a)
{
	int first, second, third;
	first = a/ 100;
	second = a%100/10 ;
	third = a % 10;
	return (100 * third + 10 * second + first);

}