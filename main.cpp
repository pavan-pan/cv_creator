#include "CV_parts.h"
#include "cv_date.h"
#include <iostream>
 
int main()
{
  CV_parts part2("samplefile.txt");
  /*
   *std::string name;
	std::string email;
	std::string phone_number;
	cv_date_t date_of_birth;
	std::string place_of_birth;
	std::string gender;
   */
  cv_date_t date_of_birth(02,04,1988);
  Personal_Details per_det("Pavan Kumar Pandappa", "pavan.pandappa@gmail.com",
		  "+491786164357", date_of_birth, "Gulbarga", "male");

  part2.add_personal_details(per_det);

  Position med_el;
  med_el.set_from_date (01,03,2016);
  med_el.set_to_date (01,03,2018);
  med_el.set_position_name ("R&D Engineer");
  med_el.set_responsibilities("Added firmware to STM32");
  med_el.set_responsibilities("Added firmware to Nordic");
  
  part2.add_work_experience(med_el); 

  Education_qual edu1;

  edu1.set_from_date(01,06,2005);
  edu1.set_to_date(01,06,2009);
  edu1.set_qualification("Bachelor of Engineering");
  edu1.set_university_name("Global academy of technology");
  edu1.set_grades("65%");

  part2.add_education_qual(edu1);

  part2.print_CV();


  return 0;
} 
