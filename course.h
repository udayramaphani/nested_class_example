#pragma once
#include <string>
#include "student.h"
#include "teacher.h"
using namespace std;

#define MAX_STUDENTS_IN_COURSE 3

class course{
private:
	student *s_[MAX_STUDENTS_IN_COURSE];
	teacher *t_;
	unsigned int student_index;

public:
	course();
	~course();
	void course_update_student_data(student *s);
	void course_update_teacher_data(teacher *t);
	void get_course_name();
};
