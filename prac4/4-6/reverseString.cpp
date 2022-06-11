#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;

	while (true) {
		cout << ">>";
		getline(cin, text);

		if (text == "exit")
			break;

		int length = text.length();

		for (int i = 0; i < text.length() / 2; i++) {
			char temp = text[i];
			text[i] = text[length - i - 1];
			text[length - i - 1] = temp;
		}
		cout << text << endl;
	}
}
