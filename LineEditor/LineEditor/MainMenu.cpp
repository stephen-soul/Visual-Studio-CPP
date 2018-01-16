#include "stdafx.h"
#include "MainMenu.h"

using namespace std;

MainMenu::MainMenu() {
	// Constructor 
	usersName = "";
}

// Ask for users name, pause, load main menu
void MainMenu::runIntro() {
	// Get the users name
	cout << "Welcome! What should we call you?\n>> ";
	getline(cin, usersName);
	// Welcome the user
	cout << "It's a pleasure to meet you, " << usersName;
	// Sleep for 0.5 seconds
	Sleep(500);
	// Run the main menu
	runMainMenu();
}

// Display the current time, personalize the user, look for input
void MainMenu::runMainMenu() {
	// Clear the screen
	system("cls");
	// Get the date and time
	getSystemTime();
	// Make a "console" screen
	cout << "Welcome, " << usersName << ", what would you like to do? (type 'help' for help)\n>> ";
	// Prompt the user for input - shove it into a string stream and then into a string array
}

// Use SYSTEMTIME to get the local time
void MainMenu::getSystemTime() {
	SYSTEMTIME lt;
    GetLocalTime(&lt);    
    printf("The current time is: %02d:%02d\n", lt.wHour, lt.wMinute);
	printf("--------------------------\n\n");
}


