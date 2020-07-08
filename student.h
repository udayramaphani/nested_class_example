#pragma once
#include <string>
using namespace std;

class student{
private:
	string first_name_;
	string last_name_;
	unsigned int age_;
	string city_;
	unsigned int ph_num_;

public:
	student();
	student(string f_name, string l_name,
		string city,
		unsigned int age, unsigned int ph_num);
	~student();
	void sit_in_class();
};
