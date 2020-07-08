#include <iostream>
#include "teacher.h"

teacher::teacher(){
}

teacher::teacher(string f_name, string l_name,
		string city,
		unsigned int age, unsigned int ph_num){
	first_name_ = f_name;
	last_name_ = l_name;
	city_ = city;
	age_ = age;
	ph_num_ = ph_num;
}

teacher::~teacher(){

}

void teacher::sit_in_class() {
	cout << "Sitting in front of class" << endl;
}

void teacher::grade_student(){
	cout << "Student graded " << endl;
}
