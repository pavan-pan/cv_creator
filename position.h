
#ifndef POSITION_H
#define POSITION_H
#include <string>
#include <vector>
#include "cv_date.h"
#include <iostream>

class Position
{
private:
  cv_date_t from_date;
  cv_date_t to_date;
  std::string position_name;
  std::string company_name;
  std::vector<std::string> responsibilities;
public:
  //Position():from_date("99/9999"), to_date("99/9999"), position_name("blabla"), company_name("bla bla"){};
  void set_from_date (unsigned int day, unsigned int month, unsigned int year);
  cv_date_t get_from_date ();
  void set_to_date (unsigned int day, unsigned int month, unsigned int year);
  cv_date_t get_to_date ();
  void set_position_name (std::string position_name);
  std::string get_position_name ();
  void set_responsibilities (std::string responsibility);
  std::vector<std::string> get_responsibilities();
  int clear_responsibilities(); 
};
#endif
