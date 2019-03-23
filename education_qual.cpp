#include "education_qual.h"
#include <vector>
#include <string>


void Education_qual::set_from_date(unsigned int day, unsigned int month, unsigned int year)
{
   from_date.set_date(day, month, year);
}

std::string Education_qual::get_from_date()
{
  return from_date.get_date();
}


void Education_qual::set_to_date(unsigned int day, unsigned int month, unsigned int year)
{
   to_date.set_date(day, month, year);
}

std::string Education_qual::get_to_date()
{
  return to_date.get_date();
}


void Education_qual::set_university_name(std::string univ_name)
{
   university_name = univ_name;
}

std::string Education_qual::get_university_name()
{
  return university_name;
}


void Education_qual::set_qualification(std::string qualification)
{
   this->qualification = qualification;
}

std::string Education_qual::get_qualification()
{
  return qualification;
}


void Education_qual::set_grades(std::string grades)
{
   this->grades = grades;
}

std::string Education_qual::get_grades()
{
  return grades;
}
