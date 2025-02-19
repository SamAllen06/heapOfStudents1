#ifndef STUDENT_IS_DEFINED
#define STUDENT_IS_DEFINED

#include <iostream>

class Student{
	protected:
		std::string studentString;
		std::string lName;
		std::string fName;
		Date* dob;
		Date* expectedGrad;
		Address* Address;
		int credits;
	
	public:
		Student();
		~Student();
		void init(studentString);
		void printStudent();
		std::string getLastFirst();

}; //end class definition

#endif
