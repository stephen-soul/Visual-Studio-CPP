#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include "LinkedList.h"

class Editor {
public:
	// Linked List object
	LinkedList linkedList;
	// Constructor & Destructor
	Editor();
	~Editor();
	// Functions
	void readFromFile(std::string fileName);
	void displayHelpScreen();

	// Variables
	std::ifstream file;
	std::string line;
};

