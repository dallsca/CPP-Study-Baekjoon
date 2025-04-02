#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int arr[10];
	int* total = new int[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		reverse(arr, arr + 10);
		total[i] = arr[2];
	}
	for (int i = 0; i < n; i++)
	{
		cout << total[i] << endl;
	}
}
	