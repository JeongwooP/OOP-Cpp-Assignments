#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char name[100], longest[100];
	int length = 0;
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;
	cout << ">>";
	for (int i = 1; i < 6; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
		if (length < strlen(name)) {
			length = strlen(name);
			strcpy(longest, name);
		}
	}
	cout << "가장 긴 이름은 : " << longest << endl;
	
}
