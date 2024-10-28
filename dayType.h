#pragma once
#include <iostream>
#include <string>
using namespace std;

class dayType
{
public:
	
	//constructor
	dayType(int = 0);
	//Setter

	//Set the day by index
	void setDay(int day);
	
	//Get the day
	string getDay();

	//Print the day
	void print();

	//get the next day
	string nextDay();

	//get the previous day
	string previousDay();

	//Calculate and return the day by adding certain days to the current day
	string addDays(int daysToAdd);

private:

	int currentDay;
	static const string daysOfWeek[7];

};

