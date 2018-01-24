/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#pragma once
#include "LinkedList.h"
#include <fstream>

class Editor {
public:
	// Make an object for the linked list
	LinkedList linkedList;
	// Constructor and destructor
	Editor();
	~Editor();
	// Functions
	void readIntoLinkedList(std::string fileName);
	// Variables
	std::string line;
	int numOfLines;
};

