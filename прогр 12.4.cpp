﻿#include <iostream>
using namespace std;

int Quarter(double x1, double y1)
{
	if (x1 > 0 & y1 > 0) cout << "1 четверть";
	else if (x1 < 0 & y1 > 0) cout << "2 четверть";
	else if (x1 < 0 & y1 < 0) cout << "3 четверть";
	else if (x1 > 0 & y1 < 0) cout << "4 четверть";
	else cout << "Введены неверные значения";
	return 0;
}

int main()
{
	setlocale(0, "");
	double x, y;
	for (int i = 0; i < 3; i++)
	{
		cout << endl << "Введите х и у: "; cin >> x >> y;
		Quarter(x, y);
	}
}