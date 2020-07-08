#include <iostream>
#include "course.h"

int main(){
	course intermediate_cpp;

	// allocate student objects
	for (int i = 0; i < MAX_STUDENTS_IN_COURSE; i++) {
		student *s = new (student);
		intermediate_cpp.course_update_student_data(s);
	}

	//teacher object
	teacher *t = new (teacher);
	intermediate_cpp.course_update_teacher_data(t);

	intermediate_cpp.get_course_name();
	t->grade_student();
	t->sit_in_class();

	return 0;
} 
