#include <iostream>;
using namespace std;

int big(int a, int b, int limit = 100) {
	int big;
	
	if (a < b) big = b;
	else big = a;

	if (big > limit) big = limit;

	return big;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	int a = big(120, 150);
	cout << x << ' ' << y << ' ' << z << ' ' << a <<endl;
}
