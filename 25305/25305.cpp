#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int findindex;
	cin >> findindex;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	reverse(arr, arr + N);
	cout << arr[findindex-1];
	delete[] arr;
	return 0;
}