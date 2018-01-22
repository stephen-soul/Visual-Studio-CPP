/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#include "stdafx.h"
#include "LinkedList.h"

// Set the main function to take in arguments
int main(int argc, char *argv[]) {
	// If there are not 3 arguments, then tell the user and close. Else, proceed
	if (argc != 3) {
		std::cout << "The program must be the program name followed by the file name and new file name.\n"
			"e.g.\"PROGRAM NAME\" \"FILE TO EDIT\" \"NEW FILE\". Please try again" << std::endl;
		system("pause");
	} else {
		// First check to see if the file name exists. If it does move on, else, prompt the user to try again
		std::cout << "You have correctly entered the proper amount of arguments";
		system("pause");
	}
	return 0;
}// End of main