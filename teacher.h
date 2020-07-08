#pragma once
#include <string>
using namespace std;

class teacher{
private:
	string first_name_;
	string last_name_;
	string city_;
	unsigned int age_;
	unsigned int ph_num_;

public:
	teacher();
	teacher(string f_name, string l_name,
		string city,
		unsigned int age, unsigned int ph_num);
	~teacher();
	void sit_in_class();
	void grade_student();
};
