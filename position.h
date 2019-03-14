
#ifndef POSITION_H
#define POSITION_H
#include <string>
#include <vector>

class Position
{
private:
  std::string from_date;
  std::string to_date;
  std::string position_name;
  std::string company_name;
  std::vector<std::string> responsibilities;
public:
  //Position():from_date("99/9999"), to_date("99/9999"), position_name("blabla"), company_name("bla bla"){};
  void set_from_date (std::string from_date);
  std::string get_from_date ();
  void set_to_date (std::string to_date);
  std::string get_to_date ();
  void set_position_name (std::string position_name);
  std::string get_position_name ();
  void set_responsibilities (std::string responsibility);
  std::vector<std::string> get_responsibilities();
  int clear_responsibilities(); 
};
#endif
