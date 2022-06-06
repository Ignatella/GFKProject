#ifndef __MyProject1MyFrame1__
#define __MyProject1MyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "MyFrame1.h"

//// end generated include

#include <wx/dcclient.h>
#include <wx/dcmemory.h>
#include <string>
#include <tuple>
#include <vector>
#include <array>
/** Implementing MyFrame1 */
class MyProject1MyFrame1 : public MyFrame1
{
protected:
	// Handlers for MyFrame1 events.
	void on_update(wxUpdateUIEvent& event);
	void open_file_open_event(wxCommandEvent& event);
	void save_file_save_event(wxCommandEvent& event);
	void about_menu_authors_open(wxCommandEvent& event);
	void patch_click(wxCommandEvent& event);
	void m_bitmap1_click(wxMouseEvent& event);
	void m_bitmap2_click(wxMouseEvent& event);
	void m_bitmap3_click(wxMouseEvent& event);
	void m_bitmap4_click(wxMouseEvent& event);
	void m_bitmap5_click(wxMouseEvent& event);
	void org_size_click(wxCommandEvent& event);
	void width_size_click(wxCommandEvent& event);
	void height_size_click(wxCommandEvent& event);
	void fit_click(wxCommandEvent& event);
public:
	/** Constructor */
	MyProject1MyFrame1(wxWindow* parent);
	//// end generated class members
private:
	std::vector<wxBitmap> bitmaps;
	std::array<wxStaticBitmap*, 5> bitmapsC = {m_bitmap1,m_bitmap2,m_bitmap3,m_bitmap4,m_bitmap5};
	std::vector<std::tuple<double, double>> originalSizes;
	int current = 0;
	wxBitmap* nowBitmap;
	void swap(int ind = 0);
};

#endif // __MyProject1MyFrame1__
