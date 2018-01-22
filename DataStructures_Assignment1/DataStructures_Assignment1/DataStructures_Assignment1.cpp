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
		// If we make it here, make the file name argument 1 and new file argument 2
		std::string fileName = argv[1];
		std::string newFile = argv[2];
		// Now make a linked list object and pass the file name
		LinkedList linkedList;
		linkedList.readIntoLinkedList(fileName);
		system("pause");
	}
	return 0;
}// End of main