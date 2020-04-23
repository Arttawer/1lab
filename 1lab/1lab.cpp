#include <iostream>
#include "Date.h"
#include "DT.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int day;
	int month;
	int year;
	cout << "Enter the date ('space' or 'enter')" << endl;
	cin >> day;
	cin >> month;
	cin >> year;

	DateTime dt;
	bool isDateCorrect = dt.checkDate(year, month, day);
	if (!isDateCorrect) {
		cout << "Введите корректную дату!!!" << endl;
		exit(1);
	}

	Date firstdate(day, month, year);

	int day_of_the_week = firstdate.Calc_Day();
	switch (day_of_the_week)
	{
	case 1:
		cout << "monday"; break;
	case 2:
		cout << "tuesday"; break;
	case 3:
		cout << "wednesday"; break;
	case 4:
		cout << "thursday"; break;
	case 5:
		cout << "friday"; break;
	case 6:
		cout << "saturday, vacation"; break;
	default:
		cout << "sunday, vacation"; break;
	}

	float holiday = firstdate.Weekend(day_of_the_week);
	if (holiday == 8.3 && year >= 1921)
		cout << "Международный женский день" << endl;
	if (holiday == 1.1)
		cout << "Новый год" << endl;
	if (holiday == 9.5 && year >= 1945)
		cout << "День победы (нерабочий с 1965)" << endl;
	if (holiday == 12.4 && year >= 1962)
		cout << "День космонавтики" << endl;
	if (holiday == 23.2 && year >= 1922)
		cout << "День защитника отечества" << endl;
}