#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

int main()
{
	cout << "Practice Work 05 Variant 10 413, Domina Olena" << endl;

	{
		float a, x, b;
		cout << "a=";
		cin >> a;
		cout << "x=";
		cin >> x;
		cout << "b=";
		cin >> b;

		cout << "\nY="
			<< (1.9f * pow(10, 3) * x - exp(a * x) + asin(b + x) - log10(pow(x, 2)) + a) / (pow(pow(a * x - 1.72f, 2), 1.0f / 3.0f) + 4.75f * pow(10, 1.2) * (a - x) - pow(cos(b - x), 2))
			<< endl;
	}

	{
		bool a, b, c;
		float x, y;
		cout << "\nEnter bool A, B, C and float X, Y" << endl;
		cout << "false=0 true=1" << endl;
		cout << "A=";
		cin >> a;
		cout << "B=";
		cin >> b;
		cout << "C=";
		cin >> c;
		cout << "X=";
		cin >> x;
		cout << "Y=";
		cin >> y;

		cout << "\nZ="
			<< boolalpha
			<< ((b || c) && (x >= y || x >= 5.5f) && a || !b)
			<< endl;
	}
	{
		cout << "\nLet's check the belonging of five points in the graphic area" << endl;
		cout << "Enter float X, Y" << endl;
		float x, y;
		for (int i{ 1 }; i < 6; i++)
		{
			cout << "X=";
			cin >> x;
			cout << "Y=";
			cin >> y;
			cout << boolalpha << (y >= -x && y >= pow(x, 2) - 2 || y > 3) << endl;
		}
	}
	system("pause");
	return 0;
}