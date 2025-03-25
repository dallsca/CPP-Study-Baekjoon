#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int arr[5] = {};
		for (int i = 0; i < 5; i++)
		{
			cin >> arr[i];
			if (i == 4)
			{
				sort(arr, arr + 5);
				if (arr[3] - arr[1] >= 4)
				{
					cout << "KIN" << endl;
				}
				else
				{
					cout << arr[1] + arr[2] + arr[3] << endl;
				}
			}
		}
	}
	
}