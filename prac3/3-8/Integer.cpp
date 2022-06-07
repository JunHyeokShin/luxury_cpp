#include <iostream>
#include <string>
using namespace std;

class Integer {
	int integer;
public:
	Integer(int num) {
		integer = num;
	}

	Integer(string num) {
		integer = stoi(num);
	}

	int get() {
		return integer;
	}

	void set(int num) {
		integer = num;
	}

	bool isEven() {
		return !(integer % 2);
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' '; // 300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}
