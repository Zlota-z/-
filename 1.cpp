#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, S, P;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	if (a < 0 || b < 0)
	{
		cout << "������! ";
	}
	else
	{
		S = a * b;
		P = 2 * (a + b);
		cout << "������� �����: " << S << endl;
		cout << "�������� �����: " << P << endl;
	}
	system("pause");
	return 0;

}