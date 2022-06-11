#include <iostream>
using namespace std;

int main() {
	int *number = new int[5];
	int sum = 0;

	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> number[i];
		sum += number[i];
	}

	double average = (double) sum / 5;

	cout << "평균 " << average << endl;
}
