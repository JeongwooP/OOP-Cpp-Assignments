#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	while(1) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
		getline(cin, s1, '\n');
		int len = s1.length();
		string b;

		if (s1 == "exit") {
			return 0;
		}
		for (int i = len - 1; i >= 0; i--) {
			string a = s1.substr(i, 1);
			b.append(a);
		}

		cout << b << endl;
	}
}
