//ПРАКТИЧЕСКАЯ РАБОТА № 3 Базовые алгоритмические структуры. Ветвление Задание 1:и Задание 2: программа вычесления электрической цепи, соостоящей из двух сопротивлений
#include <iostream>
 
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float r1, r2, R;
	int k;
	cout << "Введите сопротивление R1 ";
	cin >> r1;
	cout << "Введите сопротивлние R1 ";
	cin >> r2;
	cout << "Введите 1 - последовательное соединение" << endl;
	cout << "Введите 2 - параллельное соединение" << endl;
	cin >> k;
	if (k == 1) {
		R = r1 + r2;
		cout << "R = " << R << endl;
	}
	else if (k == 2) {
		R = (r1 * r2) / (r1 + r2);
		cout << "R = " << R << endl;
	}
	system("pause");
	return 0;
}