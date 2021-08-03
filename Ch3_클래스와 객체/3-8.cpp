#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int i;
public:
	Integer(int a) {
		i = a;
	}
	Integer(string s) {
		i = stoi(s);
	}
	int get() {
		return i;
	}
	void set(int b) {
		i = b;
	}
	int isEven() {
		if (i % 2 == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
};
int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
