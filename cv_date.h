/*
 * cv_date.h
 *
 *  Created on: Mar 17, 2019
 *      Author: pavan
 */

#ifndef CV_DATE_H_
#define CV_DATE_H_

#define MINYEAR 1900
#define MAXYEAR 2100

#include <iostream>

class cv_date_t
{
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;

public:
	cv_date_t();
	cv_date_t(unsigned int day, unsigned int month, unsigned int year);
	void set_date (unsigned int day, unsigned int month, unsigned int year);
	int checkDate();
	std::string get_date();
	int operator < (cv_date_t date1);
};



#endif /* PDF_CREATOR_CV_DATE_H_ */
