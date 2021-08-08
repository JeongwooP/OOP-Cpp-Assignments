#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourcestring() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourcestring() << "을" << getDestString() << "로 바꿉니다. ";
		cout << getSourcestring() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};
class KmToMile : public Converter {
public:
	KmToMile(double ratio);
protected:
	virtual double convert(double src);
	virtual string getSourcestring();
	virtual string getDestString();
};
KmToMile::KmToMile(double ratio) : Converter(ratio) {}
double KmToMile::convert(double src) {
	return src / 1.609344;
}
string KmToMile::getSourcestring(){
	return "Km";
}
string KmToMile::getDestString() {
	return "Mile";
}
int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}
