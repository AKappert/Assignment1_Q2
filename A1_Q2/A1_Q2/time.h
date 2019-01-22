#pragma once
class Time
{
public:
	Time();
	Time(int, int, int);
	void setTime(int, int, int);
	void printTime();
	~Time();


private:
	int hour;
	int minute;
	int second;

};

