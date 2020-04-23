
#include "Date.h"

Date::Date(int day, int month, int year)
	:day(day), month(month), year(year) {
	Calc_Day();
}

int Date::Calc_Day()
{
	int week;
	if (month < 3)
		week = (day + 31 * (month + 10) / 12 + (year - 1) + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
	else
		week = (day + 31 * (month - 2) / 12 + year + year / 4 - year / 100 + year / 400) % 7;
	return week;
}
float Date::Weekend(int week) {
	if (week == 0 || week == 6)
		return 0;
	if (day == 8 && month == 3 && year >= 1921)
		return 8.3;
	if (day == 1 && month == 1)
		return 1.1;
	if (day == 9 && month == 5 && year >= 1945)
		return 9.5;
	if (day == 12 && month == 4 && year >= 1962)
		return 12.4;
	if (day == 23 && month == 2 && year >= 1922)
		return 23.2;
}

