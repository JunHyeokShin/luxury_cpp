#include <iostream>
using namespace std;

int main() {
	char string[100];
	int count = 0;

	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(string, 100);

	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == 'x') {
			count++;
		}
	}

	cout << "x의 개수는 " << count << endl;
}
