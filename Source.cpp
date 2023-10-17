#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

int main()
{
	cout << "Practice Work 05 Variant 10 413, Domina" << endl;

	float a, x, b;
	cin >> a >> x >> b;
	
	cout << "\nY="
		<< (1.9f * pow(10, 3) * x - pow(M_E, a * x) + asin(b + x) - log10(pow(x, 2)) + a) / (pow(a * x - 1.72f, 2/3) + 4.75f * pow(10, 1.2) * (a - x) - pow(cos(b - x), 2))
		<< endl;

	bool A, B, C;
	float X, Y;
	cin >> A >> B >> C >> X >> Y;

	cout << "\nZ="
		<< (((B || C) && (X >= Y) || (X >= 5.5f)) && (A || !B))
		<< endl;
	
	cout << ((Y >= -X) && (Y >= (pow(X, 2) - 2)) || (Y > 3)) << endl;

	system("pause");
	return 0;
}