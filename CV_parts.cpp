//CV_parts.cpp
#include "CV_parts.h"
#include <iostream>

CV_parts::CV_parts(std::string file_name)
{
	CV_file_name.open(file_name);

	if (CV_file_name.is_open())
	{
		std::cout << "file open successfull" << std::endl;
	}
	else
	{
		std::cout << "Cannot open file" << std::endl;
		return;
	}
}

void CV_parts::add_personal_details(Personal_Details personal_details)
{
	this->personal_details = personal_details;
}

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
	CV_file_name << "position from date : " << it->get_from_date() << std::endl;
	CV_file_name << "position to date : " << it->get_to_date() << std::endl;
	CV_file_name << "position name : " << it->get_position_name() << std::endl;
	CV_file_name  << "position responsibilities :" << std::endl;
    std::vector<std::string> ex = it->get_responsibilities();
    for (std::vector<std::string>::iterator it1=ex.begin(); it1!=ex.end(); it1++)
    {
    	CV_file_name << *it1 << std::endl;
    }
  }
}

void CV_parts::add_education_qual (Education_qual edu)
{
	Education.push_back(edu);
}

int CV_parts::delete_education_qual()
{
  Education.clear();
  if (Education.size() == 0)
  {
    return 0; //Delete successfull
  }
  else
  {
    return 1; //Delete unsuccessfull
  }
}

void CV_parts::print_education_qual()
{
  for (std::vector<Education_qual>::iterator it=Education.begin(); it!=Education.end(); it++)
  {
	  CV_file_name << "position from date : " << it->get_from_date() << std::endl;
	  CV_file_name << "position to date : " << it->get_to_date() << std::endl;
	  CV_file_name << "university name : " << it->get_university_name() << std::endl;
	  CV_file_name << "qualification name : " << it->get_qualification() << std::endl;
	  CV_file_name << "grades : " << it->get_grades() << std::endl;

  }
}

void CV_parts::print_personal_details()
{
	CV_file_name <<  "Name :" << personal_details.get_name() << std::endl;
	CV_file_name <<  "Email :" << personal_details.get_email() << std::endl;
	CV_file_name <<  "Phone Number :" << personal_details.get_phone_number() << std::endl;
	CV_file_name <<  "Date of Birth :" << personal_details.get_date_of_birth() << std::endl;
	CV_file_name <<  "Place of Birth :" << personal_details.get_place_of_birth() << std::endl;
	CV_file_name <<  "Gender :" << personal_details.get_gender() << std::endl;
}
void CV_parts::print_CV()
{
	print_personal_details();
	print_work_experience();
	print_education_qual();
}
