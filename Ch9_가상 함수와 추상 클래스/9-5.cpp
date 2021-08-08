#include <iostream>
#include <string>
using namespace std;
class AbstractGate {
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};
class ANDGate : public AbstractGate {
public :
	virtual bool operation();
};
bool ANDGate::operation(){
	int a = 0, b = 0;
	if (x == true)
		a = 1;
	if (y == true)
		b = 1;
	return a&b;
}
class ORGate : public AbstractGate {
public:
	virtual bool operation();
};
bool ORGate::operation() {
	int a = 0, b = 0;
	if (x == true)
		a = 1;
	if (y == true)
		b = 1;
	return a|b;
}
class XORGate : public AbstractGate {
public:
	virtual bool operation();
};
bool XORGate::operation() {
	int a = 0, b = 0;
	if (x == true)
		a = 1;
	if (y == true)
		b = 1;
	return a^b;
}
int main() {
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
}
