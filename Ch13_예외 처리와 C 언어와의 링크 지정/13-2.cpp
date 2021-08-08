#include <iostream>
#include <string>
using namespace std;

int main() {
	int score;
	string grade;
	cout << "0~100점 사이의 점수 입력 >> ";
	cin >> score;
	try {
		if (100 >= score && score >= 90)
			grade = "A";
		else if (90 > score && score >= 80)
			grade = "B";
		else if (80 > score && score >= 70)
			grade = "C";
		else if (70 > score && score >= 60)
			grade = "D";
		else if (60 > score && score >= 0)
			grade = "F";
		else
			throw "다시 입력";

		cout << "점수 :" + grade << endl;
	}
	catch (const char* e) {
		cout << "점수 범위 밖" << endl;
	}
}
