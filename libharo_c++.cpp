//============================================================================
// Name        : libharo_c++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <string>
#include <iostream>
#include "Libharopdf.h"
#include "hpdf.h"

using namespace std;

class Pdf_parts {
public:
	Pdf_parts(string name, char *font_name, int font_size)
	{
		part_name = name;
		this->font_name = font_name;
		this->font_size = font_size;
	}

	void set_part_title(string name)
	{
		part_name = name;
	}

	void set_part_font_name (char * name)
	{
		font_name = name;
	}

	void set_part_font_size (int size)
	{
		font_size = size;
	}

	string* get_part_name(void)
	{
		return &part_name;
	}

	virtual ~Pdf_parts();

private:
	string part_name;
	char *font_name;
	int font_size;
};

int main (int argc, char **argv)
{
	char fname[100] = "sam.pdf";
	Libharo_pdf pdf_sample(fname);
	HPDF_Font font;

	pdf_sample.pdf_AddPage();

	string title = "First title";
	char name_font[100] = "Helvetica";

	Pdf_parts pdf_title (title, name_font, 10);


	/* Print the title of the page (with positioning center). */
	/*def_font = HPDF_GetFont (pdf, "Helvetica", NULL);
	HPDF_Page_SetFontAndSize (page, def_font, 24);

	tw = HPDF_Page_TextWidth (page, page_title);
	HPDF_Page_BeginText (page);
	HPDF_Page_TextOut (page, (width - tw) / 2, height - 50, page_title);
	HPDF_Page_EndText (page);*/

	HPDF_Font def_font;
	def_font = HPDF_GetFont (pdf_sample.get_pdf(), "Helvetica", NULL);
	HPDF_Page_SetFontAndSize (pdf_sample.get_page(0), def_font, 24);
	HPDF_REAL tw = HPDF_Page_TextWidth (pdf_sample.get_page(0), "pavan");

	HPDF_Page_BeginText(pdf_sample.get_page(0));
	HPDF_Page_TextOut (pdf_sample.get_page(0), (HPDF_Page_GetWidth (pdf_sample.get_page(0)) - tw) / 2, HPDF_Page_GetHeight (pdf_sample.get_page(0)) - 50, (char *)pdf_title.get_part_name());
	HPDF_Page_EndText (pdf_sample.get_page(0));

	//title.set_title ()

	HPDF_Free (pdf_sample.get_pdf());

	pdf_sample.pdf_save();
	return 0;
}


