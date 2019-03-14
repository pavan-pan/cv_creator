#include "CV_parts.h"
#include <iostream>
 
int main()
{
  CV_parts part2;
  
  Position med_el;
  med_el.set_from_date ("03/2016");
  med_el.set_to_date ("02/2018");
  med_el.set_position_name ("R&D Engineer");
  std::string med_el_resp1 = "Added firmware to STM32";
  std::string med_el_resp2 = "Added firmware to Nordic";
  med_el.set_responsibilities(med_el_resp1); 
  med_el.set_responsibilities(med_el_resp2);
  
  part2.add_work_experience(med_el); 
  part2.print_work_experience();
  return 0;
} 
