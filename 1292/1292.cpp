#include <iostream>
using namespace std;
int main()
{
	int arr[1000];
	int currentNum = 1;
	int count = 0;
	int total = 0;
	for (int i = 0; i < 1000; i++)
	{
		arr[i] = currentNum;
		count++;
		if (currentNum == count)
		{
			currentNum++;
			count = 0;
		}
	}
	int a, b;
	cin >> a >> b;

	for (int i = a - 1; i < b; i++)
	{
		total = total + arr[i];
	}

	cout << total;
	return 0;
}