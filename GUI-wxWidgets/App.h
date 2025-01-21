#pragma once
#include <wx/wx.h>
class App : public wxApp
{
	/*wxApp handles the initialization of the application (e.g., creating the main window) and the cleanup when the application exits.*/
	/*It manages the main event loop that processes user interactions, system events, and other input for the application*/
	/*The OnInit() function is called when the application is initialized, and it should return true if the initialization was successful.*/
	public: 
		virtual bool OnInit();
};

