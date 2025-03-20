#include <iostream>
using namespace std;

int main()
{
	int N;
	int count = 0;
	cin >> N;
	int a[100];
	for (int i = 0; i < N; i++)
	{
		int element;
		cin >> element;
		a[i] = element;
	}
	int findNum;
	cin >> findNum;
	for (int i = 0; i < N; i++)
	{
		if (a[i] == findNum)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}