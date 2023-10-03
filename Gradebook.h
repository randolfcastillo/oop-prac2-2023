#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include "Course.h"
#include "Student.h"
#include "Person.h"
class Gradebook {
protected:
public:
void addGrade(int student_id, int course_id, std::string assignment, int value);
};

#endif