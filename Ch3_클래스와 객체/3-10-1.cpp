#include <iostream>
#include<string>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b;
}

class Sub {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b;
}

class Mul {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;
}

class Div {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (1) {
		int s1, s2;
		string m1;
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> s1 >> s2 >> m1;

		if (m1 == "+") {
			a.setValue(s1, s2);
			cout << a.calculate() << endl;
		}
		else if (m1 == "-") {
			s.setValue(s1, s2);
			cout <<  s.calculate() << endl;
		}
		else if (m1 == "*") {
			m.setValue(s1, s2);
			cout <<  m.calculate() << endl;
		}
		else if (m1 == "/") {
			d.setValue(s1, s2);
			cout <<  d.calculate() << endl;
		}
	}
}
