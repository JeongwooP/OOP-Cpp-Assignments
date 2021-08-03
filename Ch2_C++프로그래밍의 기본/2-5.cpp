#include <iostream>

using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";
	char x[100];
	cin.getline(x, 100);
	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (x[i] == 'x') {
			count++;
		}
	}

	cout << "x의 개수는" << count;
}
