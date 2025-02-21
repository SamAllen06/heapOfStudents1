#include <iostream>
#include <sstream>
#include "student.h"
#include "address.h"
#include"date.h"

Student::Student(){
	std::string studentString = "";
	std::string lName = "";
	std::string fName = "";
	Date* dob = new Date();
	Date* expectedGrad = new Date();
	Address* address = new Address();
	int credits = 0;
} //end constructor definition

Student::~Student(){
	delete dob;
	delete expectedGrad;
	delete address;
} //end destructor definition

void Student::init(std::string studentString){
	Student::studentString = studentString;
	std::string stringCredits = "";
	std::stringstream converter;

	converter.clear();
	converter.str("");

	converter.str(Student::studentString);
	getline(converter, Student::lName, ',');
	getline(converter, Student::fName, ',');
	getline(converter, address::streetAddress, ',');
	getline(converter, address::city, ',');
	getline(converter, address::state, ',');
	getline(converter, address::zip, ',');
	getline(converter, dob::date, ',');
	getline(converter, expectedGrad::date, ',');
	getline(converter, Student::stringCredits, ',');
	
	converter.clear();
	converter.str("");
	
	converter << stringCredits;
	converter >> Student::credits;
} //end initializer

void Student::printStudent(){
	std::cout << Student::fName << " " << Student::lName << std::endl << "Student Address: ";
	address.printAddress();
	std::cout << std::endl << "Student Date of Birth: ";
	dob.printDate();
	std::cout << std::endl << "Student Graduation Date: ";
	expectedGrad.printDate();
	std::cout << std::endl << "Student's credits: " << Student::credits << std::endl;
} //end printStudent

std::string Student::getLastFirst(){
	std::string lastFirst = Student::lName + ", " + Student::fName;
	return lastFirst
} //end getLastFirst
