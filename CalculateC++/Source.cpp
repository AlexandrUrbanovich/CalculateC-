#include<iostream>
#include<Math.h>
using namespace std;

class Calculate {
private:
	double a, b, c;
	char operation;

public:
	Calculate();
	void Calcs();
};	

Calculate::Calculate() {

		bool success = false;
		
		do {
			cout << "¬ведите первое число a = ";
			cin >> a;
			if (cin.good()) {
				success = true;
			}
			else {
				cout << "«начение введено не верно!" << endl;
				cin.clear();
			}
		} while (!success);

		cout << "¬ведите необходимое действие +, -, *, /, s" << endl;
		cin >> operation;

		do {
			cout << "¬ведите первое число b = ";
			cin >> b;
			if (cin.good()) {
				success = true;
			}
			else {
				cout << "«начение введено не верно!" << endl;
				cin.clear();
			}
		} while (!success);
}

void Calculate::Calcs() {
	switch (operation) {
	case '-':
		cout << "a - b = " << a - b << '\n';
		break;
	case '+':
		cout << "a + b = " << a + b << '\n';
		break;
	case '*':
		cout << "a * b = " << a * b << '\n';
		break;
	case '/':
		if (b < 0 || b > 0) {
			cout << "a / b = " << a / b << '\n';
			break;
		}
		else {
			cout << "ƒеление на ноль!" << '\n';
		}
		break;
	case 's':
		if (a >= 0 ) {
			c = sqrt(a);
			cout << "sqrt(" << a << ") = " << c << '\n';
			break;
		}
		else {
			cout << "»звлечение корн€ из отрицательного числа!" << '\n';
		}
		break;
	default:
		cout << "¬ведена не верна€ операци€" << '\n';
		break;
	}
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	Calculate A;
	A.Calcs();
	

	system("pause");
	return 0;
}