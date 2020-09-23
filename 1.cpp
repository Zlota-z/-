#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, S, P;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	if (a < 0 || b < 0)
	{
		cout << "Error! ";
	}
	else
	{
		S = a * b;
		P = 2 * (a + b);
		cout << "S = : " << S << endl;
		cout << "P = : " << P << endl;
	}
	system("pause");
	return 0;

}
