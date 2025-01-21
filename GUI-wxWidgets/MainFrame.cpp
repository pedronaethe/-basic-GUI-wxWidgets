#include "MainFrame.h"
#include <wx/wx.h>



/* Constructor of the MainFrame Class*/
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	/*A panel is a window on which controls are placed.It is used to group controls together and manage their layout.*/
	wxPanel* panel = new wxPanel(this);

	wxButton* button1 = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 75), wxSize(200, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 350), wxSize(200, 50));

	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnCloseEvent, this);
	this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
	button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);
	/*This create a status bar in the bottom part of the program to signalize events*/
	CreateStatusBar();


}

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt)
{
	wxLogMessage("Button Clicked");
	evt.Skip();

}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt)
{
	wxLogStatus("Button 1 Clicked!");
	evt.Skip();
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt)
{
	wxLogStatus("Button 2 Clicked!");
	evt.Skip();
}

void MainFrame::OnCloseEvent(wxCloseEvent& evt)
{
	wxLogMessage("Closing the window");
	evt.Skip();
}