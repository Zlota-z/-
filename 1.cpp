//part 1
#include <iostream>

using namespace std;

int main()
{
	float a, b, S, P;
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

//part 2

#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    float d, L;
    cout << "Введите диаметр: ";
    cin >> d;
    L = d * 3.14;
    cout << "Длина окружности равна: " << L << endl;
}
 
