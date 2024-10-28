#include "dayType.h"
#include <iostream>
#include <string>
using namespace std;

//constructor
dayType::dayType(WeekDays day) {
	setDay(day);
}
//Setter

//Set the day
void dayType::setDay(WeekDays day) {
	currentDay = day;
}

//Get the day
WeekDays dayType::getDay() {
	return currentDay;
}

//Print the day
void dayType::print() {
	cout << getDayString(currentDay) << endl;
}

//get the next day

WeekDays dayType::getNextDay() {
	return static_cast<WeekDays>((currentDay + 1) % 7);
}

//get the previous day

WeekDays dayType::getPreviousDay() {
	return static_cast<WeekDays>((currentDay + 6) % 7);
}

//Calculate and return the day by adding certain days to the current day
WeekDays dayType::findDay(int daysToBeAdded) {
	return static_cast<WeekDays>((currentDay + daysToBeAdded) % 7);
}

//function to convert enum to string
string dayType::getDayString(WeekDays day) {
	switch (day) {
	case Mon:
		return "Mon";
	case Tue:
		return "Tue";
	case Wed:
		return "Wed";
	case Thu:
		return "Thu";
	case Fri:
		return "Fri";
	case Sat:
		return "Sat";
	case Sun:
		return "Sun";
	default:
		return "Invalid";
	}
}