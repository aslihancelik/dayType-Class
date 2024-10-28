#pragma once
#include <iostream>
#include <string>
using namespace std;

class dayType
{
private:

public:

	//constructor
	dayType();
	//Setter

	//Set the day
	void setDay();
	
	//Get the day
	string getDay(int dayNum);

	//Print the day
	void print();

	//get the next day
	
	string getNextDay(int dayNum);

	//Calculate and return the day by adding certain days to the current day
	string findDay(int dayNum, int daysToBeAdded);
};

