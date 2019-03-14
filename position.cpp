#include "position.h"

void Position::set_from_date(std::string from_date)
{
  this->from_date = from_date;
}

std::string Position::get_from_date(void)
{
  return from_date;
}


void Position::set_to_date(std::string to_date)
{
  this->to_date = to_date;
}

std::string Position::get_to_date(void)
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













