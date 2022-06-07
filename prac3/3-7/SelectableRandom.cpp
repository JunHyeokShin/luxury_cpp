#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int num;
public:
	SelectableRandom(int n);
	int next();
	int nextInRange(int low, int high);
};

SelectableRandom::SelectableRandom(int n) {
	num = n;
	srand((unsigned) time(0));
}

int SelectableRandom::next() {
	int ran = rand();
	if (num % 2 == 0) {
		if (ran % 2 == 0)
			return ran;
		else
			return ran - 1;
	}
	else {
		if (ran % 2 == 0)
			return ran + 1;
		else
			return ran;
	}
}

int SelectableRandom::nextInRange(int low, int high) {
	int range = (high - low) + 1;
	int ran = low + (rand() % range);
	if (num % 2 == 0) {
		if (ran % 2 == 0)
			return ran;
		else
		return ran + 1;
	}
	else {
		if (ran % 2 == 0)
			return ran + 1;
		else
			return ran;
	}
}

int main() {
	SelectableRandom r1(0);
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.next();
		cout << n << ' ';
	}

	SelectableRandom r2(1);
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r2.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}
