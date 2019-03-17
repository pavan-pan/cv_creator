#ifndef CV_PARTS_H
#define CV_PARTS_H

#include "position.h"
#include "education_qual.h"
#include <vector>
#include <string>

class CV_parts
{
  private:
     std::vector<Position> Work_experience;
     std::vector<Education_qual> Education;
  
  public:
     void add_work_experience(Position pos);
     int delete_work_experience();
     void print_work_experience();

     void add_education_qual (Education_qual edu);
     int delete_education_qual();
     void print_education_qual();

     void print_CV();

};
#endif
