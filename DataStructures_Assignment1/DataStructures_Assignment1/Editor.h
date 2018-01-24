#pragma once

#include <iostream>
#include <fstream>
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

	// Variables
	std::ifstream file;
	std::string line;
};

