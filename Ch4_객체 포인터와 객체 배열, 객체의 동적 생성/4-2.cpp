#include <iostream>;
using namespace std;

int main() {
	int *p = new int[5];
	int sum = 0;

	cout << "5개 정수를 입력하세요. >> ";

	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}

	cout << "평균은 " << sum / 5.0 << endl;

	delete[] p;
}
