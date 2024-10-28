#include "dayType.h"
#include <iostream>
#include <string>
using namespace std;

//Initialize the static array daysOfWeek
const string dayType::daysOfWeek[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

//constructor
dayType::dayType(int day) {
	setDay(day);
}
//Setter

//Set the day
void dayType::setDay(int day) {
	if (day > 0) {
		currentDay = day % 7;
	}
	else {
		cout << "You can't set the day to a negative value" << endl;
	}
}

//Get the day
string dayType::getDay() {
	return daysOfWeek[currentDay];
}

//Print the day
void dayType::print() {
	cout  << daysOfWeek[currentDay] << endl;
}

//get the next day

 string dayType::nextDay() {
	return daysOfWeek[(currentDay + 1) % 7];
}

//get the previous day

string dayType::previousDay() {
	return daysOfWeek[(currentDay + 6) % 7];
}

//Calculate and return the day by adding certain days to the current day
string dayType::addDays(int daysToAdd) {
	if (daysToAdd >= 0) {
		return daysOfWeek[(currentDay + daysToAdd) % 7];
	}
	else {
		cout << "You can't add a negative value." << endl;
		return;
	}
	
}
