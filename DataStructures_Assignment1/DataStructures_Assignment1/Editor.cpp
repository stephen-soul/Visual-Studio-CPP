/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#include "stdafx.h"
#include "Editor.h"


Editor::Editor() {
}


Editor::~Editor() {
}

void Editor::readIntoLinkedList(std::string fileName) {
	// Make an ifstream for the file
	std::ifstream file;
	// Open the file
	file.open(fileName);
	// If it fails, notify the user, else, add it to the linked list
	if (file.fail()) {
		std::cout << "There was a problem opening the file. Please check the file name and try again.";
	} else {
		if (file.is_open()) {
			while (std::getline(file, line)) {
				numOfLines++;
				linkedList.add(numOfLines);
			}
			file.close();
		}
	}
	linkedList.
}
