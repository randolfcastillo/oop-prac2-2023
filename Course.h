#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include "University.h"
#include "Person.h"
class Course {
    protected: 
    std::string name;
    int course_id;
    Person** persons;
    public:
    void addPerson(Person*);
};


#endif