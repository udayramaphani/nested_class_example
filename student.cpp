#include <iostream>
#include "student.h"

student::student(){
}

student::student(string f_name, string l_name,
		string city,
		unsigned int age, unsigned int ph_num) {
	first_name_ = f_name;
	last_name_ = l_name;
	city_ = city;
	age_ = age;
	ph_num_ = ph_num;
}

student::~student(){
}

void student::sit_in_class(){
	cout << "Sitting in main theater" << endl;
}

