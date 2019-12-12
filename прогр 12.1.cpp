#include <iostream>

using namespace std;

void PowerA3(double A, double& B)
{
	B = A * A * A;
}

int main(void)
{
	int i;
	double mas[5];
	for (i = 0; i < 5; i++)
	{
		cin >> mas[i];
	}
	for (i = 0; i < 5; i++)
	{
		PowerA3(mas[i], mas[i]);
		cout << mas[i] << ' ';
	}
}