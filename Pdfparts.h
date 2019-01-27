/*
 * Pdfparts.h
 *
 *  Created on: Jan 27, 2019
 *      Author: pavan
 */

#ifndef PDFPARTS_H_
#define PDFPARTS_H_

#include <string>

class Pdf_parts {
public:
	Pdf_parts();
	virtual ~Pdf_parts();

private:
	std::string part_name;
	char *font_name;
	int font_size;
};

#endif /* PDFPARTS_H_ */
