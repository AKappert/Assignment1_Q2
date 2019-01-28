//Andrew Kappert (40063638)
//August Marco Eine ()

#include "pch.h"
#include <iostream>
#include "time.h"
#include "date.h"
#include "flight.h"
#include <string>

using namespace std;

int main()
{
	Flight flight;
	string id;
	Time deptime;
	Date depdate;
	Time arrtime;
	Date arrdate;
	string depcity1, depcity2, depcity;
	string arrcity1, arrcity2, arrcity;
	int tmphour, tmpminute, tmpsecond;
	int tmpday, tmpmonth, tmpyear;

	cout << "Enter flight ID: ";
	getline(cin, id);

	cout << "\nEnter departure time (hour): ";
	cin >> tmphour;
	cout << "Enter departure time (minute): ";
	cin >> tmpminute;
	cout << "Enter departure time (second): ";
	cin >> tmpsecond;
	
	deptime.setTime(tmphour, tmpminute, tmpsecond);

	cout << "\nEnter departure date (day): ";
	cin >> tmpday;
	cout << "Enter departure date (month): ";
	cin >> tmpmonth;
	cout << "Enter departure date (year): ";
	cin >> tmpyear;

	depdate.setDate(tmpday, tmpmonth, tmpyear);

	cout << "\nEnter arrival time (hour): ";
	cin >> tmphour;
	cout << "Enter arrival time (minute): ";
	cin >> tmpminute;
	cout << "Enter arrival time (second): ";
	cin >> tmpsecond;

	arrtime.setTime(tmphour, tmpminute, tmpsecond);

	cout << "\nEnter arrival date (day): ";
	cin >> tmpday;
	cout << "Enter arrival date (month): ";
	cin >> tmpmonth;
	cout << "Enter arrival date (year): ";
	cin >> tmpyear;

	arrdate.setDate(tmpday, tmpmonth, tmpyear);

	cout << "\nEnter departure city: ";
	cin >> depcity1;
	getline(cin, depcity2);
	depcity = depcity1 + depcity2;

	cout << "Enter arrival city: ";
	cin >> arrcity1;
	getline(cin, arrcity2);
	arrcity = arrcity1 + arrcity2;



	flight.setFlight(id, deptime, depdate, arrtime, arrdate, depcity, arrcity);

	flight.printFlight();



	cout << "\n";
	system("pause");
	return 0;
}
