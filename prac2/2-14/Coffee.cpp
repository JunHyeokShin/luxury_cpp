#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int money = 0;

	cout << "에스프레소 2000원, 아메리카도 2300원, 카푸치노 2500원입니다." << endl;

	while (money < 20000) {
		cout << "주문>>";
		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0) {
			money += 2000 * num;
			cout << 2000 * num << "원입니다. 맛있게 드세요." << endl;
		} else if (strcmp(coffee, "아메리카노") == 0) {
			money += 2300 * num;
			cout << 2300 * num << "원입니다. 맛있게 드세요." << endl;
		} else if (strcmp(coffee, "카푸치노") == 0) {
			money += 2500 * num;
			cout << 2500 * num << "원입니다. 맛있게 드세요." << endl;
		} else {
			cout << "다시 주문해 주세요." << endl;
		}
	}
	cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}
