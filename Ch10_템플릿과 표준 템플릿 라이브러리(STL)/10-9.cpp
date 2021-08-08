#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> t;
	vector<int>::iterator it;
	int i;
	double sum = 0;

	while(1){
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> i;
		if (i == 0) break;
		t.push_back(i);
		for (it =t.begin(); it != t.end(); it++) {
			cout << *it << ' ';
		}
		sum += i;
		cout << endl;
		cout << "평균:" << sum / t.size() << endl;
	}
}

//	for (int i = 0; i < t.size(); i++) {
//		cout << t.at(i) << ' ';
//	}
