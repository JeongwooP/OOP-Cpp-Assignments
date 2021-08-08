#include <iostream>
#include <string>
using namespace std;
int* concat(int a[], int sizea, int b[], int sizeb) {
	int* c = new int[sizea + sizeb];

	if (c == NULL)
		throw 0;
	else if (a == NULL || b == NULL) 
		throw 10;
	else if (sizea <= 0 || sizeb <= 0)
		throw 20;
	else {
		for (int i = 0; i < sizea; i++) {
			c[i] = a[i];
		}
		for (int i = sizea; i < sizeb + sizea; i++) {
			c[i] = b[i - sizea];
		}
	}
	return c;
}
int main() {
	int x[] = {1,2,3,4,5};
	int y[] = { 10,20,30,40 };
	try {
		int *p = concat(x, 5, y, 4);
		for (int n = 0; n < 9; n++) cout << p[n] << ' ';
		cout << endl;
		delete[]p;
	}
	catch (int failCode) {
		cout << "오류 코드 : " << failCode << endl;
	}
}
