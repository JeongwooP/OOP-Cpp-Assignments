#include <iostream>
#include <string>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }

	Color& operator+ (Color b);
	bool operator== (Color b);
};

Color& Color::operator+ (Color b) {
	Color tmp;
	tmp.red = this->red + b.red;
	tmp.green = this->green + b.green;
	tmp.blue = this->blue + b.blue;
	return tmp;
}
bool Color::operator== (Color b) {
	if (this->red == b.red && this->green == b.green && this->blue == b.blue)
		return true;
	else
		return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
} 

