#include "pch.h"
#include "date.h"
#include <iostream>

using namespace std;

Date::Date()
{
	day = 1;
	month = 1;
	year = 1;
}

Date::Date(int d, int m, int y)
{
	if (d >= 1 && d <= 31) day = d;
	if (m >= 1 && m <= 12) month = m;
	year = y;
}

void Date::setDate(int d, int m, int y)
{
	if (d >= 1 && d <= 31) day = d;
	if (m >= 1 && m <= 12) month = m;
	year = y;
}


void Date::printDate()
{
	cout << day << " / " << month << " / " << year;
}

Date::~Date()
{
	//cout << "Date destructor executed";
}
