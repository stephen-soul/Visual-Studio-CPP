/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#pragma once
#include "Node.h"

class LinkedList {
public:
	// Make object for node
	Node *first, *last;
	// Constructor and virtual destructor
	LinkedList();
	virtual ~LinkedList();
	// Functions
	void add(std::string num);
	void deleteValue(std::string value);
	void deleteNode(int nodenum);
	void insertAfterValue(std::string value, std::string num);
	void insertBeforeNode(int nodenum, std::string num);
	void display();
	// Variables

private:
	
};

