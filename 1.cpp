//part 1
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, S, P;
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
 
//part 3

#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    c = (a+b)/2;
    cout << "Среднее арифметическое равно: " << c << endl;
}

//part 4

#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите первое число: ";
    cin >> a;
    a = a * a;
    cout << "Введите второе число: ";
    cin >> b;
    b = b * b;
    cout << "Сумма равна: " << a + b << endl;
    cout << "Разность равна: " << a - b << endl;
    cout << "Произведение равно: " << a * b << endl;
    cout << "Частное равно: " << a / b << endl;
    
}

//part 5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите первое число: ";
    cin >> a;
    a = abs(a);
    cout << "Введите второе число: ";
    cin >> b;
    b = abs(b);
    cout << "Сумма равна: " << a + b << endl;
    cout << "Разность равна: " << a - b << endl;
    cout << "Произведение равно: " << a * b << endl;
    cout << "Частное равно: " << a / b << endl;

}
