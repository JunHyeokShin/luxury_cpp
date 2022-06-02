#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int c, int w, int s);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

void CoffeeMachine::drinkEspresso() {
	coffee--;
	water--;
}

void CoffeeMachine::drinkAmericano() {
	coffee--;
	water--;
	water--;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee--;
	water--;
	water--;
	sugar--;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6을 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}
