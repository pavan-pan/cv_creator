#include "position.h"

void Position::set_from_date(unsigned int day, unsigned int month, unsigned int year)
{
  this->from_date.day = day;
  this->from_date.month = month;
  this->from_date.year = year;

  if (from_date.checkDate() != 0)
  {
	  std::cout << "From-date invalid " << std::endl;
	  return;
  }
}

cv_date_t Position::get_from_date(void)
{
  return from_date;
}


void Position::set_to_date(unsigned int day, unsigned int month, unsigned int year)
{
  this->to_date.day = day;
  this->to_date.month = month;
  this->to_date.year = year;
  if (from_date.checkDate() != 0)
  {
	  std::cout << "To-date invalid " << std::endl;
  	  return;
  }
}

cv_date_t Position::get_to_date(void)
{
  return to_date;
}


void Position::set_position_name(std::string position_name)
{
  this->position_name = position_name;
}

std::string Position::get_position_name(void)
{
  return position_name;
}

void Position::set_responsibilities (std::string responsibility)
{
  responsibilities.push_back(responsibility);
}

std::vector<std::string> Position::get_responsibilities()
{
  return responsibilities;
}

int Position::clear_responsibilities()
{
  responsibilities.clear();
  if (responsibilities.size() == 0)
  {
    return 0; //If the responsibilities vector is cleared then return 0 else return 1 (error)
  }
  else
  {
    return 1;
  }
}













