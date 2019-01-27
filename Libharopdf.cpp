/*
 * Libharopdf.cpp
 *
 *  Created on: Jan 27, 2019
 *      Author: pavan
 */

#include "Libharopdf.h"
#include <iostream>

using namespace std;

void error_handler (HPDF_STATUS error_no, HPDF_STATUS detail_no, void *user_data)
{
    printf ("ERROR: error_no=%04X, detail_no=%d\n",
      (unsigned int) error_no, (int) detail_no);
    throw std::exception (); /* throw exception on error */
}

Libharo_pdf :: Libharo_pdf(char * pdf_name)
{
	cout << "Constructor called" << endl;
	pdf_doc_name = pdf_name;
	pdf = HPDF_New (error_handler, NULL);

	if (!pdf)
	{
		printf ("error: cannot create PdfDoc object\n");
	}
	try
	{
		/* do page description processes (do not have to check function return codes) */
		HPDF_SaveToFile (pdf, pdf_name);
	}
	catch (...)
	{
		HPDF_Free (pdf);
	}

	/* set compression mode */
	HPDF_SetCompressionMode (pdf, HPDF_COMP_ALL);

	/* set page mode to use outlines. */
	HPDF_SetPageMode (pdf, HPDF_PAGE_MODE_USE_OUTLINE);

	/* set password */
	HPDF_SetPassword (pdf, "owner", "user");

	HPDF_SaveToFile (pdf, pdf_doc_name);

}

Libharo_pdf::~Libharo_pdf()
{
	// TODO Auto-generated destructor stub

}

HPDF_Doc Libharo_pdf:: get_pdf ()
{
	return pdf;
}

void Libharo_pdf :: pdf_AddPage()
{
	HPDF_Page page;
	//pdf_pages.push_back (HPDF_AddPage(pdf));
	page = HPDF_AddPage(pdf);
	pdf_pages.push_back(page);

	HPDF_SaveToFile (pdf, pdf_doc_name);
}

HPDF_Page Libharo_pdf :: get_page (int iter)
{
	return pdf_pages[iter];
}

void Libharo_pdf :: pdf_save()
{
	HPDF_SaveToFile (pdf, pdf_doc_name);
}
