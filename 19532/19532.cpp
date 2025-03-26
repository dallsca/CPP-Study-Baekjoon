#include <iostream>
using namespace std;

	
int main() 
{
	float a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int x = 0; int y = 0;
	x = (e * c - b * f) / (a * e - b * d);
	y = (d * c - a * f) / (b * d - a * e);
	cout << x << " " << y;
}