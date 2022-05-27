#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int i = 0;

	cout << "문자열 입력>>";
	getline(cin, str);

	while (true) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		i++;

		if (str[i] == '\0')
			break;

		cout << endl;
	}
}
