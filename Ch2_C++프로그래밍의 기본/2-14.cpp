#include <iostream>
using namespace std;

int main() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

	char coffee[20];

	int num, cash = 0;

	while (cash < 20000) {
		cout << "주문: ";
		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0) {
			cash += 2000 * num;
			cout << cash << "원입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			cash += 2300 * num;
			cout << cash << "원입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			cash += 2500 * num;
			cout << cash << "원입니다. 맛있게 드세요\n";
		}
	}
		cout << "오늘 " << cash << "원을 판매하여 카페를 닫습니다. 내일 봐요~\n";
		return 0;
}
