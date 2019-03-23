/*
 * personal_details.h
 *
 *  Created on: Mar 23, 2019
 *      Author: pavan
 */

#ifndef PDF_CREATOR_PERSONAL_DETAILS_H_
#define PDF_CREATOR_PERSONAL_DETAILS_H_

#include <iostream>
#include "cv_date.h"

class Personal_Details
{
private:
	std::string name;
	std::string email;
	std::string phone_number;
	cv_date_t date_of_birth;
	std::string place_of_birth;
	std::string gender;

public:
	Personal_Details();
	Personal_Details(std::string name, std::string email, std::string phone_number,
			cv_date_t date_of_birth, std::string place_of_birth, std::string gender);

	std::string get_name();
	std::string get_email();
	std::string get_phone_number();
	std::string get_date_of_birth();
	std::string get_place_of_birth();
	std::string get_gender();
};


#endif /* PDF_CREATOR_PERSONAL_DETAILS_H_ */
