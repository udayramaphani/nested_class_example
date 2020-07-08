#include <iostream>
#include "course.h"

course::course(){
	student_index = 0;
}

void course::course_update_student_data(student *s){
	if (this->student_index < MAX_STUDENTS_IN_COURSE)
		this->s_[this->student_index++] = s;
	else
		cout << "Max enrollment limit reached" << endl;
}

void course::course_update_teacher_data(teacher *t){
	this->t_ = t;
}

void course::get_course_name(){
	cout << "This is History course" << endl;
}

course::~course(){
}
