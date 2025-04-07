#include <iostream>
#include <string>
using namespace std;


int main()
{
	string str;
	cin >> str;
	int size = str.size();
	bool find = true;
	for (int i = 0; i < size/2; i++)
	{
		if (str[i] != str[size - i - 1])
		{
			find = false;
			break;
		}
	}
	cout << find;
	return 0;
}
