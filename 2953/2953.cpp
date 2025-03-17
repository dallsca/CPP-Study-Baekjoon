#include <iostream>
using namespace std;

int main()
{
	int a[5][4];
	int winner=0;
	int point=0;
	
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> a[i][j];
			sum = sum + a[i][j];
		}
		if (sum > point)
		{
			point = sum;
			winner = i + 1;
		}
	}
	cout << winner << " " << point;
}