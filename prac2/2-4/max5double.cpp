#include <iostream>
using namespace std;

int main() {
	double max;
	double number[5];

	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++) {
		cin >> number[i];
		if (i == 0) max = number[0];
		if (max < number[i]) max = number[i];
	}

	cout << "제일 큰 수 = " << max << endl;
}
