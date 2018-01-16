#include "stdafx.h"
#include "MainMenu.h"

using namespace std;

MainMenu::MainMenu() {
	// Constructor 
	usersName = "";
	gettingMenuInput = false;
	menuInput = "";
}

// Ask for users name, pause, load main menu
void MainMenu::runIntro() {
	// Get the users name
	cout << "Welcome! What should we call you?\n>> ";
	getline(cin, usersName);
	// Run the main menu
	runMainMenu();
}

// Display the current time, personalize the user, look for input
void MainMenu::runMainMenu() {
	// Clear the screen
	system("cls");
	// Get the date and time
	getSystemTime();
	// Get input and validation
	while (gettingMenuInput) {
		// Ask for input
		cout << "Welcome, " << usersName << ", what would you like to do? (type 'help' for help)\n>> ";
		getline(cin, menuInput);
		stringstream menuStringstream(menuInput);
		
	}
}

// Use SYSTEMTIME to get the local time
void MainMenu::getSystemTime() {
	SYSTEMTIME lt;
    GetLocalTime(&lt);    
    printf("The current time is: %02d:%02d\n", lt.wHour, lt.wMinute);
	printf("--------------------------\n\n");
}


