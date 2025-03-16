#include <iostream>
using namespace std;

int main()
{
	int minus, plus;
	int train = 0;
	int comp = 0;
	int n = 10;  //역의 개수 10개
	for (int i = 0; i < n; i++)
	{
		cin >> minus >> plus;
		train = train -minus + plus;
		if (comp < train)
		{
			comp = train;
		}
	}
	cout << comp;
}