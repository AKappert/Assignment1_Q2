#include "pch.h"
#include "flight.h"
#include "date.h"
#include <iostream>

using namespace std;

Flight::Flight()
{
}

Flight::Flight(string id, Time deptime, Date depdate, Time arrtime, Date arrdate, string depcity, string arrcity)
{
	fID = id;
	fDepTime = deptime;
	fDepDate = depdate;
	fArrTime = arrtime;
	fArrDate = arrdate;
	fDepCity = depcity;
	fArrCity = arrcity;
}

void Flight::setFlight(string id, Time deptime, Date depdate, Time arrtime, Date arrdate, string depcity, string arrcity)
{
	fID = id;
	fDepTime = deptime;
	fDepDate = depdate;
	fArrTime = arrtime;
	fArrDate = arrdate;
	fDepCity = depcity;
	fArrCity = arrcity;
}

void Flight::setID(string id)
{
	fID = id;
}

void Flight::setDepTime(Time deptime)
{
	fDepTime = deptime;
}

void Flight::setDepDate(Date depdate)
{
	fDepDate = depdate;
}

void Flight::setArrTime(Time arrtime)
{
	fArrTime = arrtime;
}

void Flight::setArrDate(Date arrdate)
{
	fArrDate = arrdate;
}

void Flight::setDepCity(string depcity)
{
	fDepCity = depcity;
}

void Flight::setArrCity(string arrcity)
{
	fArrCity = arrcity;
}

string Flight::getID()
{
	return fID;
}

Time Flight::getDepTime()
{
	return fDepTime;
}

Date Flight::getDepDate()
{
	return fDepDate;
}

Time Flight::getArrTime()
{
	return fArrTime;
}

Date Flight::getArrDate()
{
	return fArrDate;
}

string Flight::getDepCity()
{
	return fDepCity;
}

string Flight::getArrCity()
{
	return fArrCity;
}

void Flight::printFlight()
{
	cout << "\nFlight ID: " << fID;
	cout << "\nDeparture Time: "; fDepTime.printTime();
	cout << "\nDeparture Date: "; fDepDate.printDate();
	cout << "\nArrival Time: ";	fArrTime.printTime();
	cout << "\nArrival Date: ";	fArrDate.printDate();
	cout << "\nDeparture City: " << fDepCity;
	cout << "\nArrival City: " << fArrCity;
}



Flight::~Flight()
{
	//cout << "Flight Destructor Executed";
}
