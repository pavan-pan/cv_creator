/*
 * Libharopdf.h
 *
 *  Created on: Jan 27, 2019
 *      Author: pavan
 */

#ifndef LIBHAROPDF_H_
#define LIBHAROPDF_H_

#include "hpdf.h"
#include <string>
#include <vector>

class Libharo_pdf
{
public:
	Libharo_pdf(char * pdf_name);
	virtual ~Libharo_pdf();

	HPDF_Doc get_pdf ();

	void pdf_AddPage();

	HPDF_Page get_page (int iter);

	void pdf_save();


private:
	HPDF_Doc pdf;
	std::vector <HPDF_Page> pdf_pages;
	char *pdf_doc_name;
	//HPDF_Font pdf_font;
};



#endif /* LIBHAROPDF_H_ */
