﻿#include <iostream>
using namespace std;

double RingS(double R1, double R2)
{
	double S;
	S = 3.14 * pow(R1, 2) - 3.14 * pow(R2, 2);
	return S;
}

int main()
{
	setlocale(0, "");
	double a1, a2, a3, b1, b2, b3;
	cout << "Введите радиусы первой пары окружностей (R1>R2): "; cin >> a1 >> b1;
	cout << "Введите радиусы второй пары окружностей (R1>R2): "; cin >> a2 >> b2;
	cout << "Введите радиусы третьей пары окружностей (R1>R2): "; cin >> a3 >> b3;

	cout << "S1 = " << RingS(a1, b1) << endl;
	cout << "S2 = " << RingS(a2, b2) << endl;
	cout << "S3 = " << RingS(a3, b3);
}