#include <iostream>
#include <string>
using namespace std;

template <class T> bool equalArrays(T x[], T y[], T a) {
	for (int i = 0; i < a; i++) {
		if (x[i] != y[i])
			return false;
	}
	return true;
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	if (equalArrays(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	int z[] = { 1, 20, 100, 5, 4 };
	int w[] = { 1, 10, 100, 5, 4 };
	if (equalArrays(z, w, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;
}
