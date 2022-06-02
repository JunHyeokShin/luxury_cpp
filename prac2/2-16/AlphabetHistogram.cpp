#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int count = 0;
	int alphabet[27] = {0, };
	char buf[10000];

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	cin.getline(buf, 10000, ';');

	for (int i = 0; i < strlen(buf); i++) {
		if (isalpha(buf[i])) {
			if (buf[i] < 91)
				buf[i] = tolower(buf[i]);
			count++;
			alphabet[buf[i] - 97]++;
		}
	}

	cout << "총 알파벳 수 " << count << endl << endl;

	for (int i = 0; i < 26; i++) {
		cout << (char) (i + 'a') << "(" << alphabet[i] << ")" << "\t: ";
		for (int j = 0; j < alphabet[i]; j++)
			cout << "*";
		cout << endl;
	}
}
