#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14*radius*radius;
}

void swap(Circle &a, Circle &b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle donut, pizza(10);
	cout << "swap 전- donut : " << donut.getArea() << " pizza : " << pizza.getArea() << endl;
	swap(donut, pizza);
	cout << "swap 후- donut : " << donut.getArea() << " pizza : " << pizza.getArea() << endl;
}
