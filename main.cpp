#include "CV_parts.h"
#include <iostream>
 
int main()
{
  CV_parts part2("samplefile.txt");
  
  Position med_el;
  med_el.set_from_date (01,03,2016);
  med_el.set_to_date (01,03,2018);
  med_el.set_position_name ("R&D Engineer");
  std::string med_el_resp1 = "Added firmware to STM32";
  std::string med_el_resp2 = "Added firmware to Nordic";
  med_el.set_responsibilities(med_el_resp1); 
  med_el.set_responsibilities(med_el_resp2);
  
  part2.add_work_experience(med_el); 
  part2.print_work_experience();

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
