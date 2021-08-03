#include <iostream>
#include<string>
using namespace std;

#include"Calculate.h";

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
			cout << s.calculate() << endl;
		}
		else if (m1 == "*") {
			m.setValue(s1, s2);
			cout << m.calculate() << endl;
		}
		else if (m1 == "/") {
			d.setValue(s1, s2);
			cout << d.calculate() << endl;
		}
	}
}
