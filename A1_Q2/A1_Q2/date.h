#pragma once

using namespace std;

class Date
{
public:
	Date();
	Date(int, int, int);
	void setDate(int, int, int);
	void printDate();


	~Date();


private:
	int day;
	int month;
	int year;
};

