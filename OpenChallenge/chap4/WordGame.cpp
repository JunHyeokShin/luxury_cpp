#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class WordGame {
	Player *p;
	int number;
public:
	WordGame(int number);
	~WordGame() { delete[] p; }
	void game();
};

WordGame::WordGame(int number) {
	this->number = number;
	p = new Player[number];
}

void WordGame::game() {
	string n;
	string a = "아버지";
	string b;

	for (int i = 0; i < number; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		cin >> n;
		p[i].setName(n);
	}
	cout << endl;
	cout << "시작하는 단어는 " << a << "입니다." << endl;
	int i = 0;
	while (true) {
		cout << p[i%number].getName() << ">>";
		cin >> b;
		int j = a.size();
		if (a.at(j - 3) == b.at(0) && a.at(j - 2) == b.at(1) && a.at(j - 1) == b.at(2)) {
			a = b;
		}
		else {
			cout << p[i%number].getName() << "탈락!!" << endl;
			break;
		}
		i++;
	}
}

int main() {
	cout << "끝말 잇기 게임을 시작합니다." << endl;
	cout << "게임에 참가하는 인원은 몇명입니까?";
	int number;
	cin >> number;
	WordGame wordGame(number);
	wordGame.game();
}
