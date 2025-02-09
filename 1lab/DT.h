#pragma once
#ifndef LABA8_DT_H
#define LABA8_DT_H

#include <iostream>
#include <string> //fix for windows

enum DT_addingType
{
	AT_YEAR = 1,
	AT_MON = 2,
	AT_DAY = 3,
	AT_HOUR = 4,
	AT_MIN = 5,
	AT_SEC = 6
};

class DateTime
{
private:
	int dt_sec;
	int dt_min;
	int dt_hour;
	int dt_day;
	int dt_mon;
	int dt_year;
	bool checkRange(int value, int min, int max);
	std::string parseInt(int value, int length = 2);

public:
	DateTime(int year, int mon, int day, int hour, int min, int sec, bool isIntegrated = false);
	DateTime();
	std::string getDateTime();
	bool checkDate(int year, int mon, int day, bool isAddingDate = false);
	bool checkDateTime(int year, int mon, int day, int hour, int min, int sec);
	int addDateTime(int year, int mon, int day, int hour, int min, int sec);
	int addDateTime(int type, int count);
	std::string subtractDateTime(int year, int mon, int day, int hour, int min, int sec);
};

#endif LABA8_DT_H

