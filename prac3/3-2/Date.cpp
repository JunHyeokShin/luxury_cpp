#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d);
	Date(string date);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string date) {
	year = stoi(date.substr(0, 4));
	month = stoi(date.substr(5, 1));
	day = stoi(date.substr(7, 2));
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::show() {
	cout << year << "년 " << month << "월 " << day << "일" << endl;
}

int main() {
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;
}
