/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#pragma once
#include <iostream>
#include "Node.h"
#include <string>

class LinkedList {
public:
	// Constructor and virtual destructor
	LinkedList();
	~LinkedList();
	// Functions
	void add(std::string line);
	void deleteValue(std::string lineValue);
	void deleteNode(std::string lineNode);
	void insertAfterValue(std::string lineValue, std::string lineNode);
	void insertBeforeNode(std::string lineNode, std::string line);
private:
	Node *first;
};