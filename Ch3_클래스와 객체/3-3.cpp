#include <iostream>
#include <string>
using namespace std;

class Account {
		string name;
		int id;
		int money;
public:
	Account(string n, int i, int m);
	string getOwner();
	int inquiry();
	void deposit(int d);
	void withdraw(int w);

};

Account::Account(string n, int i, int m) {
	name = n;
	id = i;
	money = m;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return money;
}
void Account::deposit(int d) {
	money += d;
}
void Account::withdraw(int w) {
	money -= w;
}
int main() {
	Account a("Jeongwoo", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
