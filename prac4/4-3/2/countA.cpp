#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int count = 0;
	int index = -1;

	cout << "문자열 입력>> ";
	getline(cin, text, '\n');

	while (true) {
		index = text.find('a', index + 1);
		if (index == -1) break;
		count++;
	}
	
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}
