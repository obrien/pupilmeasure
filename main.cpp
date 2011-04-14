////////////////////////////////////////////////////////////////////////////////
// Filename: main.cpp
// Author:   Balazs KOVACS
// Year:     2010
//
// Description: Application definition and program entry point.
//
////////////////////////////////////////////////////////////////////////////////

// wxWidgets
#include <wx/wx.h>

// others
#include "MainFrame.h"
#include "PupilMeasure.h"


////////////////////////////////////////////////////////////
// Class:        PupilTracker
// Derived from: wxApp
//
// Description: Main application class
////////////////////////////////////////////////////////////
class PupilMeasureApp : public wxApp
{
    public:
	    bool OnInit();
};


// imlement macro
IMPLEMENT_APP(PupilMeasureApp)


////////////////////////////////////////////////////////////
// Class name:  PupilMeasureApp
// Method name: OnInit
//
// Description: wxWidgets program entry point.
////////////////////////////////////////////////////////////
bool PupilMeasureApp::OnInit()
{
    // create model
    PupilMeasure *model = new PupilMeasure();

    // create main frame, with model
    MainFrame *frame = new MainFrame(NULL, model);
    
    // show frame
    frame->Show();
    return true;
}
