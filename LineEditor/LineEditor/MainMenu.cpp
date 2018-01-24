#include "stdafx.h"
#include "MainMenu.h"

using namespace std;

MainMenu::MainMenu() {
	// Constructor 
	usersName = "";
	gettingMenuInput = true;
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

// Display the current time, personalize the user, look for input and parse the input into an array
void MainMenu::runMainMenu() {
	while (gettingMenuInput) {
		// Clear the screen
		system("cls");
		// Get the date and time
		getSystemTime();
		// Get input and validation
		// Ask for input
		cout << "Welcome, " << usersName << ", what would you like to do? (type 'help' for help)\n>> ";
		getline(cin, menuInput);
		/*
			* GRAB THE USER INPUT, USE STRINGSTREAM TO PARSE THE INFORMATION AND THEN FIND OUT WHAT THE
			* USER WANTS BASED ON THE 0 SPOT IN THE ARRAY THAT THE STRINGSTREAM DUMPS
			*/
		int i = 0;
		string userChoice[4];
		stringstream usersInput(menuInput);
		transform(userChoice[0].begin(), userChoice[0].end(), userChoice[0].begin(), ::tolower);
		while (usersInput.good() && i < 3) {
			usersInput >> userChoice[i];
			++i;
		}
		// Check the users input against a list of things
		if (userChoice[0] == "help") {
			// Goto help function
			runHelpMenu();
			continue;
		} else if (userChoice[0] == "edit") {
			// Edit - Use userChoice[1] as the file to edit and userChoice[2] as the new file name
			if (userChoice[1].empty()) {
				cout << "Not enough arguments. It needs to be 'edit [FILENAME] [NEWFILENAME]'\n\n";
			}
			else if (userChoice[2].empty()) {
				cout << "Not enough arguments. It needs to be 'edit [FILENAME] [NEWFILENAME]'\n\n";
			}
			else if (!userChoice[3].empty()) {
				cout << "Too many arguments. It needs to be 'edit [FILENAME] [NEWFILENAME]'\n\n";
			}
			else {
				cout << userChoice[0] << " " << userChoice[1] << " " << userChoice[2] << " ";
			}
			system("pause");
			continue;
		} else if (userChoice[0] == "q") {
			// Quit
			gettingMenuInput = false;
		} else {
			cout << "\nPlease enter a proper command.\n";
			system("pause");
		}
	}
	// If the user selects 'quit' then it will leave the loop and exit
	exit(0);
}

// Use SYSTEMTIME to get the local time
void MainMenu::getSystemTime() {
	SYSTEMTIME lt;
    GetLocalTime(&lt);    
    printf("The current time is: %02d:%02d\n", lt.wHour, lt.wMinute);
	printf("--------------------------\n\n");
}

// When the user wants to see the help menu just spit out what was in the document
void MainMenu::runHelpMenu() {
	cout << "\nHere are a list of known commands."
            "\nTo start, type 'edit' <input file> <output file>"
            "\nYou will start on line 1 with a prompt. You may"
            "\nType I followed by a number to insert on that line number."
            "\nIf I is not followed by a number you will insert on the previous line."
            "\nYou may type D to delete the current line."
            "\nAlternately D may be followed by a specific line number,"
            "\nOr D can be followed by a range of numbers. i.e 3-5 deleting"
            "\nLine 3 through 5. V may display entire sets of lines in the buffer."
            "\nG goes to the beginning of the buffer, or you may choose one."
            "\nL lists the lines of the buffer using the same numbering system as the delete."
            "\nS substitutes a new line entered by the user for the current line in the buffer or"
            "\na specified line number. You will be prompted for a new line."
            "\nE specifies exiting and saving."
			"\nType 'Q' to quit\n\n";
	system("pause");
}


