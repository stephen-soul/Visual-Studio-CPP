/*
 * THIS IS THE MAIN.CPP IT WILL TAKE THE ARGUMENTS THAT ARE ENTERED AND OPEN THE FILE THAT MATCHES THE FIRST ARGUMENT AFTER THE PROGRAM NAME
 */
#include "stdafx.h"
#include "LinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
	// Check the arguments that follow the name of the program
	if (argc != 3) {
		cout << "The arguments do not match the requirements.\nThe program must be [Program Name] [File To Open] [New File].\n\n";
		system("pause");
		return(0);
	}
	else {
		// Object for linked list
		LinkedList linkedList;
		// Turn the arguments into strings
		string fileName = argv[1];
		string newFileName = argv[2];
		cout << "Checking to see if " << fileName << " exists..." << endl << endl;
		// Try to open file. The function returns false if there's problems
		if (linkedList.tryToFindFile(fileName, newFileName)) {
			cout << "\nGreat. We found the file!";
		}
		else {
			cout << "That file name does not exist. Please check the spelling and try again" << endl << endl;
		}
	}
	system("pause");
    return 0;
}

