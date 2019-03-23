/*
 * personal_details.cpp
 *
 *  Created on: Mar 23, 2019
 *      Author: pavan
 */

#include "personal_details.h"

Personal_Details :: Personal_Details()
{

}

Personal_Details :: Personal_Details(std::string name, std::string email, std::string phone_number,
		cv_date_t date_of_birth, std::string place_of_birth, std::string gender)
{
	this->name = name;
	this->email = email;
	this->phone_number = phone_number;
	this->date_of_birth = date_of_birth;
	this->place_of_birth = place_of_birth;
	this->gender = gender;
}


std::string Personal_Details :: get_name()
{
	return name;
}

std::string Personal_Details :: get_email()
{
	return email;
}

std::string Personal_Details :: get_phone_number()
{
	return phone_number;
}

std::string Personal_Details :: get_date_of_birth()
{
	return date_of_birth.get_date();
}

std::string Personal_Details :: get_place_of_birth()
{
	return place_of_birth;
}

std::string Personal_Details :: get_gender()
{
	return gender;
}

