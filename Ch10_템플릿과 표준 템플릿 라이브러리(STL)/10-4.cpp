#include <iostream>
#include <string>
using namespace std;

template <class T> bool search(T f, T x[], T a) {
	for (int i = 0; i < a; i++) {
		if (f == x[i])
			return true;
	}
	return false;
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다.";
	else cout << "100이 배열 x에 포함되어 있지 않다.";
}
