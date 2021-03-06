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
	Flight flight;																			   //Variables needed
	string id;																				   //Variables needed
	Time deptime;																			   //Variables needed
	Date depdate;																			   //Variables needed
	Time arrtime;																			   //Variables needed
	Date arrdate;																			   //Variables needed
	string depcity1, depcity2, depcity;														   //Variables needed
	string arrcity1, arrcity2, arrcity;														   //Variables needed
	int tmphour, tmpminute, tmpsecond;														   //Variables needed
	int tmpday, tmpmonth, tmpyear;															   //Variables needed

	cout << "Enter flight ID: ";															   //Prompt for input
	getline(cin, id);																		   //Prompt for input
																							   //Prompt for input
	cout << "\nEnter departure time (hour): ";												   //Prompt for input
	cin >> tmphour;																			   //Prompt for input
	cout << "Enter departure time (minute): ";												   //Prompt for input
	cin >> tmpminute;																		   //Prompt for input
	cout << "Enter departure time (second): ";												   //Prompt for input
	cin >> tmpsecond;
	
	deptime.setTime(tmphour, tmpminute, tmpsecond);					 //set time

	cout << "\nEnter departure date (day): ";												  //Prompt
	cin >> tmpday;																			  //Prompt
	cout << "Enter departure date (month): ";												  //Prompt
	cin >> tmpmonth;																		  //Prompt
	cout << "Enter departure date (year): ";												  //Prompt
	cin >> tmpyear;																			  //Prompt

	depdate.setDate(tmpday, tmpmonth, tmpyear);						//set date

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



	flight.setFlight(id, deptime, depdate, arrtime, arrdate, depcity, arrcity);				//create flight and initialize with info

	flight.printFlight();																   //print flight info



	cout << "\n";
	system("pause");
	return 0;
}
