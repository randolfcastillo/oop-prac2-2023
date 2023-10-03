#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include "Course.h"

class University{
    protected:
  std :: string name;
  std :: string location;
  Course* courses;
  public: 
  void addCourse(int course_id, std ::string name);

};


#endif