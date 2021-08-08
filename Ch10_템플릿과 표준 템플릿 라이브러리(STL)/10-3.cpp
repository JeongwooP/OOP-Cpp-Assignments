#include <iostream>
#include <string>
using namespace std;

template <class T> void reverseArray(T *x, T a) {
	for (int i = 0; i < (a - 1) / 2; i++) {
		T temp = x[a - 1 - i];
		x[a - 1 - i] = x[i];
		x[i] = temp;
	}
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}
