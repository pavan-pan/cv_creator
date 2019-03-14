//CV_parts.cpp
#include "CV_parts.h"
#include <iostream>
void CV_parts::add_work_experience(Position pos)
{
  Work_experience.push_back(pos);  
}

int CV_parts::delete_work_experience()
{
  Work_experience.clear();
  if (Work_experience.size() == 0)
  {
    return 0; //Delete successfull
  }
  else
  {
    return 1; //Delete unsuccessfull
  }
}

void CV_parts::print_work_experience()
{
  for (std::vector<Position>::iterator it=Work_experience.begin(); it!=Work_experience.end(); it++)
  {
    std::cout << "position from date : " << it->get_from_date() << std::endl;
    std::cout << "position to date : " << it->get_to_date() << std::endl;
    std::cout << "position name : " << it->get_position_name() << std::endl;
    std::cout  << "position responsibilities :" << std::endl;
    std::vector<std::string> ex = it->get_responsibilities();
    for (std::vector<std::string>::iterator it1=ex.begin(); it1!=ex.end(); it1++)
    {
       std::cout << *it1 << std::endl;
    }
  }
}
