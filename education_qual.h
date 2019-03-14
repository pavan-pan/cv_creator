#ifndef EDUCATION_QUAL_H
#define EDUCATION_QUAL_H
#include <string>
class Education_qual
{
  private:
     std::string from_date;
     std::string to_date;
     std::string university_name;
     std::string qualification;
     std::string grades;
  public:
     void set_from_date (std::string from_date);
     std::string get_from_date ();
     void set_to_date  (std::string to_date);
     std::string get_to_date ();
     void set_university_name (std::string univ_name);
     std::string get_university_name ();
     void set_qualification (std::string qualification);
     std::string get_qualification();
     void set_grades (std::string grades);
     std::string get_grades();
};
#endif
