#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string text;

	srand((unsigned) time(0));
	cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";

	while (true) {
		cout << "\n>>";
		getline(cin, text);

		if (text == "exit")
			break;

		int length = text.length();
		int index = rand() % length;
		while (true) {
			if (text[index] != ' ')
				break;
		}

		char c = rand() % 2 ? rand() % 26 + 65 : rand() % 26 + 97;
		text[index] = c;
		cout << text;
	}
}
