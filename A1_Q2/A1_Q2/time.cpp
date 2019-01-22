#include "pch.h"
#include "time.h"
#include <iostream>
#include <iomanip>

using namespace std;


Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h, int m, int s)
{
	if (h >= 0 && h < 24) hour = h;
	if (m >= 0 && m < 60) minute = m;
	if (s >= 0 && s < 60) second = s;
}

void Time::setTime(int h, int m, int s)
{
	if (h >= 0 && h < 24) hour = h;
	if (m >= 0 && m < 60) minute = m;
	if (s >= 0 && s < 60) second = s;
}

void Time::printTime()
{
	cout << setfill('0');
	cout << right << setw(2) << hour << ":" << right << setw(2) << minute << ":" << right << setw(2) << second;
}


Time::~Time()
{
	//cout << "Time destructor executed";
}
