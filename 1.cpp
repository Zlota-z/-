#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, S, P;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	if (a < 0 || b < 0)
	{
		cout << "Ошибка! ";
	}
	else
	{
		S = a * b;
		P = 2 * (a + b);
		cout << "Площадь равна: " << S << endl;
		cout << "Периметр равен: " << P << endl;
	}
	system("pause");
	return 0;

}