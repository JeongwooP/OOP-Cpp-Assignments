#include<iostream>
using namespace std;

class MyVector {
	int *mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show() { cout << "mem[3] : " << mem[3] << endl; }
};

MyVector::MyVector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

int main() {
	MyVector Vector1, Vector2(30, 5);
	Vector1.show();
	Vector2.show();
}
