#include <iostream>
using namespace std;

int Sign(double X)
{
	if (X < 0) return -1;
	else if (X == 0) return 0;
	else return 1;
}
int main()
{
	double a, b, c;
	cin >> a >> b;
	c = Sign(a) + Sign(b);
	cout << c;
}