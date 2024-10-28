// dayType Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program gets, sets the day of the week, returns the previous and next day as well as calculate 
// and return the day by adding certain days to the current day.
//
//Programmer: Aslihan Aria Celik
//
#include "dayType.h"
#include <iostream>

int main()
{
    dayType day;

    //Print default constructor result
    cout << "The default construcor initialized the day to: ";
    day.print();

    // Get and print the next day
    cout << "Next day is: ";
    cout << day.nextDay() << endl; 

    //parameterized constructor
    dayType day2(3);
    cout << "The parameterized construcor with Wed initialized the day to: ";
    day2.print();

    // Get and print the next day
    cout << "Next day is: ";
    cout << day2.nextDay() << endl;

    // Get and print the previous day
    cout << "Previous day is: ";
    cout << day2.previousDay() << endl;

    //set the day to sunday
    cout << "Setting day2 to sunday: ";
    day2.setDay(0);
    day2.print();

    // Calculate and print the day after adding certain days
    int daysToAdd = 4;
    cout << "The day after adding " << daysToAdd << " days is: ";
    cout << day2.addDays(daysToAdd) << endl;

    // Get and print the next day
    cout << "Get the day2: ";
    cout << day2.getDay() << endl;

    //set the day to sunday
    cout << "Setting day2 to friday: ";
    day2.setDay(5);
    day2.print();

    // Get and print the next day
    cout << "Get the day2: ";
    cout << day2.getDay() << endl;
    
}

