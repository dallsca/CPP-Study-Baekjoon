#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int typo;
		std::string name;
		cin >> typo >> name;
		int length = name.length();
		for (int j = 0; j <length ; j++)
		{
			
			if (j != typo-1)
			{
				cout << name[j];
			}
			
		}
		cout << endl;
	}
}