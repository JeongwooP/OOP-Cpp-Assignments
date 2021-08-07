#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name) { setRadius(radius); this->name = name; }
	void show() { cout << "가장 면적이 큰 피자는 " << name << "입니다"; }
	string getName(){ return name; }
};

int main() {
	string name[5];
	int radius[5];
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	int most = 0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		cin >> radius[i] >> name[i];
	}
	NamedCircle pizza[5] = { NamedCircle(radius[0] ,name[0]),NamedCircle(radius[1] ,name[1]),NamedCircle(radius[2] ,name[2]),
		NamedCircle(radius[3] ,name[3]),NamedCircle(radius[4] ,name[4]) };

	for (int i = 0; i < 5; i++) if (pizza[i].getRadius() > pizza[most].getRadius()) most = i;
	
	pizza[most].show();
}
