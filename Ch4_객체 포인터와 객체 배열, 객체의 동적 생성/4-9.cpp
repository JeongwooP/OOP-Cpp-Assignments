#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
Person::Person() {
	name = "아무개";
	tel = "010-1234-1234";
}
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}
int main() {
	Person *p = new Person[3];
	int index;
	string id;
	string name, tel;
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i+1 << ">> ";
		getline(cin, id);
		index = id.find(" ");
		tel = id.substr(index + 1);
		name = id.substr(0, index);
		p[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int j = 0; j < 3; j++) {
		cout << p[j].getName() << " ";
	}
	cout << endl;
	cout << "전화번호를 검색합니다. 이름을 입력하세요 >>";
	cin >> name;
	for (int k = 0; k < 3; k++) {
		if (name == p[k].getName()) {
			cout <<"전화 번호는 " << p[k].getTel();
		}
	}
}
