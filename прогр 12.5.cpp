#include <iostream>
using namespace std;

double Fact2()
{
	int N;
	double melon = 1;
	cin >> N;
	if (N % 2 == 0)
	{
		for (int i = 2; i <= N; i += 2) melon *= i;
	}
	else for (int i = 1; i <= N; i += 2) melon *= i;
	cout << melon;
	return 0;
}
int main()
{
	Fact2();
}