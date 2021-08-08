#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int i;
	string name, pw;
	map<string, string> key;
	while (1) {
		cout << "삽입:1, 검사:2, 종료:3 >> ";
		cin >> i;
		if (i == 1) {
			cout << "이름 암호>> ";
			cin >> name >> pw;
			key.insert(make_pair(name, pw));
		}
		else if (i == 2) {
			cout << "이름? ";
			cin >> name;
			if (key.find(name) == key.end()) {
				cout << "다시" << endl;
				continue;
			}
			else {
				while (1) {
					cout << "암호? ";
					cin >> pw;
					if (pw == key[name]) {
						cout << "통과!!" << endl;
						break;
					}
					else {
						cout << "실패" << endl;
						continue;
					}
				}
			}
		}
		else if (i == 3) {
			cout << "프로그램을 종료합니다...";
			break;
		}
	}
}
