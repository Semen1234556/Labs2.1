
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	double x, z1, z2;
	cout << "x = "; cin >> x;
	// 1 р-ня
	z1 = pow((1 + x + x * x) / ((2 * x) + pow(x, 2)) + 2 - (1 - x + x * x) / (2 * x - x * x), -1) * (5 - 2 * pow(x, 2));
	// 2 р-ня
	z2 = (4 - x * x) / 2;
	cout << "z1 = " << z1;
	cout << " z2 = " << z2;
}