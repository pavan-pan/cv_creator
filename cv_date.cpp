/*
 * cv_date.cpp
 *
 *  Created on: Mar 17, 2019
 *      Author: pavan
 */

#include "cv_date.h"
#include <string>
#include <sstream>

cv_date_t :: cv_date_t()
{
	this->day = 0;
	this->month = 0;
	this->year = 0;
}

cv_date_t :: cv_date_t (unsigned int day, unsigned int month, unsigned int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void cv_date_t::set_date(unsigned int day, unsigned int month, unsigned int year)
{
  this->day = day;
  this->month = month;
  this->year = year;

  if (this->checkDate() != 0)
  {
	  std::cout << "From-date invalid " << std::endl;
	  return;
  }
}

std::string cv_date_t::get_date()
{
  std::stringstream ss;

  ss << this->day << "/" << this->month << "/" << this->year;
  return ss.str();
}

int cv_date_t::checkDate()
{
	if(day < 1 || day > 31)
	{
		return 1;
	}
	else if(month < 1 || month > 12)
	{
		return 1;
	}
	else if (year < MINYEAR || year > MAXYEAR)
	{
		return 1;
	}

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
	{
		return 1;
	}
	else if ((month == 2) && (year % 4 == 0) && day > 29)
	{
		return 1;

	}
	else if ((month = 2) && (year % 4 != 0) && day > 28)
	{
		return 1;
	}
	return 0;
}

int cv_date_t::operator < (cv_date_t date1)
{
	if (this->year < date1.year)
	{
		return 1;
	}
	else if (this->year == date1.year)
	{
		if (this->month < date1.month)
		{
			return 1;
		}
		else if (this->month == date1.month)
		{
			if (this->day < date1.day)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}
