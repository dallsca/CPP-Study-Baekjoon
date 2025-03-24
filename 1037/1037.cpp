#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int number = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	number = arr[0] * arr[n-1];
	cout << number;
	delete[] arr;
	return 0;
}