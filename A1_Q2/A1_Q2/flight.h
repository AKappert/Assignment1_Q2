#pragma once
#include "date.h"
#include "time.h"
#include <string>

using namespace std;

class Flight
{
public:
	Flight();
	Flight(string, Time, Date, Time, Date, string, string);
	void setFlight(string, Time, Date, Time, Date, string, string);
	void setID(string);
	void setDepTime(Time);
	void setDepDate(Date);
	void setArrTime(Time);
	void setArrDate(Date);
	void setDepCity(string);
	void setArrCity(string);

	string getID();
	Time getDepTime();
	Date getDepDate();
	Time getArrTime();
	Date getArrDate();
	string getDepCity();
	string getArrCity();

	void printFlight();

	~Flight();


private:
	string fID = "N/A";
	Time fDepTime = Time();
	Date fDepDate = Date();
	Time fArrTime = Time();
	Date fArrDate = Date();
	string fDepCity = "N/A";
	string fArrCity = "N/A";



};

