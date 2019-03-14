#ifndef CV_PARTS_H
#define CV_PARTS_H

#include "position.h"
#include <vector>
#include <string>

class CV_parts
{
  private:
     std::vector<Position> Work_experience;
  
  public:
     void add_work_experience(Position pos);
     int delete_work_experience();
     void print_work_experience();

};
#endif
