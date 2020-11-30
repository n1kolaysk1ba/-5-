#include <iostream>
#include "windows.h"
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x, y, x1, x2, h;

	cout << "Введіть нижню межу (х1)" << endl;
	cin >> x1;

	cout << "Введіть верхню межу (х2)" << endl;
	cin >> x2;

	cout << "Введіть крок табулювання (h)" << endl;
	cin >> h;

	x = x1;

	cout << "Результат:" << endl;

	while (x <= (x2 + h / 2))
	{
		y = pow(x, 6) + 5 * log(abs(x)) + 3;
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;

	}

	system("pause");
	return 0;
}
