#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int low, int high);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int n = rand();
	return n % 2 ? n - 1 : n;
}

int EvenRandom::nextInRange(int low, int high) {
	low = low % 2 ? low + 1 : low;
	high = high % 2 ? high : high + 1;
	int range = (high - low) + 1;
	int n = low + (rand() % range);
	return n % 2 ? n - 1 : n;
}

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
