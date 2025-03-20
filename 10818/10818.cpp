#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* a = new int[N];
	int min = 0;
	int max = 0;
	int find = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] < a[min])
		{
			min = i;
		}
		else if (a[i] > a[max])
		{
			max = i;
		}
	}
	cout << a[min] << " " << a[max];
	delete[] a;
	return 0;
}