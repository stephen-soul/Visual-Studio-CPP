/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#include "stdafx.h"
#include "Editor.h"
#include <algorithm>

// Set the main function to take in arguments
int main(int argc, char *argv[]) {
	// If we make it here, make the file name argument 1 and new file argument 2
	std::string fileName = argv[1];
	std::string newFile = argv[2];
	// Make a variable for user input
	std::string userInput = "";
	// Make a bool for the editor running
	bool running = true;
	// Int for the while loop below
	int i = 0;
	// If there are not 3 arguments, then tell the user and close. Else, proceed
	if (argc != 3) {
		std::cout << "The program must be the program name followed by the file name and new file name.\n"
			"e.g.\"PROGRAM NAME\" \"FILE TO EDIT\" \"NEW FILE\". Please try again" << std::endl;
		system("pause");
	} else {
		// While the editor is running, do this
		while (running) {
			// Make the screen appealing
			std::cout << "\n\t    CPP LINE EDITOR\n----------------------------------------\n\n";
			// Now make an editor object and pass the file name
			Editor editor;
			editor.readFromFile(fileName);
			std::cout << "\n----------------------------------------\n" << "Please type a command (or help for help)\n\n" << ">> ";
			// Get user input and then stringstream it to parse it properly, make the first word lowercase and then dump it into a string array 
			getline(std::cin, userInput);
			std::string userChoice[3];
			std::stringstream splitInput(userInput);
			while (splitInput.good() && i < 3) {
				splitInput >> userChoice[i];
				++i;
			}
			std::transform(userChoice[0].begin(), userChoice[0].end(), userChoice[0].begin(), ::tolower);
			if (userChoice[0] == "help") {
				// If the user types help, go to help
				editor.displayHelpScreen();
				system("cls");
				continue;
			}else if (userChoice[0] == "quit") {
				// If the user types quit, then quit
				std::cout << "Have a lovely day.\n\n";
				running = false;
			} else {
				// Else, re-ask for input
				std::cout << "Please enter proper input";
				system("pause");
				system("cls");
				continue;
			}
		}
	}
	system("pause");
	return 0;
}// End of main