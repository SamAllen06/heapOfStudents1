#include "date.h"
#include <iostream>
#include <sstream>

Date::Date(){
	Date::dob = "";
	int Date::day = 0;
	int Date::month = 0;
	int Date::year = 0;
} //end constructor definition

void Date::init(std::string dob){
	Date::dob = dob;
	...
} //end initializer definition

void Date::printDate(){
	std::string months = {"null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << months[month] << " "  << day << ", " << year<< std::endl;
} //end printDate definition
