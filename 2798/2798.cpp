#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[100];
	int sum = 0;
	int maxsum=0;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			for (int k = j+1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= M && maxsum < sum)
				{
					maxsum = sum;
				}

			}
		}
	}
	cout << maxsum;
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[100];
	int sum = 0;
	int maxsum=0;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			for (int k = j+1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= M && maxsum < sum)
				{
					maxsum = sum;
				}

			}
		}
	}
	cout << maxsum;
	return 0;
}

	