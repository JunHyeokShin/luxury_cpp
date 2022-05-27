#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char input[100];

	do {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(input, 100);
	} while (strcmp(input, "yes") != 0);

	cout << "종료합니다..." << endl;
}
