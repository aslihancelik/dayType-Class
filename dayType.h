#pragma once
#include <iostream>
#include <string>
using namespace std;

//enumeration for days of the week
enum WeekDays { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

class dayType
{
public:
	
	//constructor
	dayType(WeekDays = Mon);
	//Setter

	//Set the day
	void setDay(WeekDays day);
	
	//Get the day
	WeekDays getDay();

	//Print the day
	void print();

	//get the next day
	WeekDays getNextDay();

	//get the previous day
	WeekDays getPreviousDay();

	//Calculate and return the day by adding certain days to the current day
	WeekDays findDay(int daysToBeAdded);

	//function to convert enum to string
	string getDayString(WeekDays day);

private:

	WeekDays currentDay;

};

