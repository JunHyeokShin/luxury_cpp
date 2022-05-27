#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100];
	char longestName[100];
	int max = 0;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요." << endl << ">>";

	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');

		cout << i << " : " << name << endl;

		if (i == 1) max = strlen(name);
		else if (strlen(name) > max) {
			max = strlen(name);
			strcpy(longestName, name);
		}
	}

	cout << "가장 긴 이름은 " << longestName << endl;
}
